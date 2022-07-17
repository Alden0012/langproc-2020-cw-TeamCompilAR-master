#include "ast_functiondef.hpp"
#include <iostream>
void Function::OutputMIPS(Stack *g){
    if(retPointer){
        retType->pointer = true;
    }
    FuncStack = new Stack;
    int stack_size = 8 + getStackSize();
    int saved_stack = stack_size;
    std::vector<Declaration *> Params = getParams();
    for(int i = 0;i<Params.size();i++){
        saved_stack += Params[i]->returnDeclSize();
    }    





    FuncScope->PopulateStack(FuncStack,8);
    FuncStack->retType = retType;
    for(auto x : g->stack_decls){ //adding globals
        FuncStack->add(x.first, 0);
        FuncStack->addType(x.first,x.second);
    }

    //std::string funcioname = Decl->name;
    //directives
    std::cout << "        " << ".text" << std::endl;
    std::cout << "        " << ".global\t" << Decl->name << std::endl;
    //push stack
    std::cout << Decl->name << ":" << std::endl;
    std::cout << "        " << "addiu $sp, $sp, -"<< saved_stack << std::endl;
    std::cout << "        " << "sw $fp, " << 4 << "($sp)" << std::endl;
    std::cout << "        " << "sw $ra, " << "0($sp)" << std::endl;
    std::cout << "        " << "add $fp, $sp, $0" << std::endl;
    // parameters

    int extraSize = 0;
    int floatCounter = 0;
    for(int i = 0;i<Params.size();i++){
        int pSize = Params[i]->returnDeclSize();
        if (pSize != 8){
        if((Params[i]->type->value_type != Types::T_FLOAT) || (floatCounter >= 4)){
        if(pSize == 1){
        std::cout << "        " << "sb $" << i + 4 + extraSize << "," << stack_size << "($fp)" << std::endl;     
        }
        else{
        std::cout << "        " << "sw $" << i + 4 + extraSize << "," << stack_size << "($fp)" << std::endl;
        }
        FuncStack->add(Params[i]->name, stack_size);
        FuncStack->addType(Params[i]->name, Params[i]->type);
        }
        else{
        std::cout << "        " << "swc1 $f" << 12 + floatCounter << "," << stack_size << "($fp)" << std::endl;
        FuncStack->add(Params[i]->name, stack_size);
        FuncStack->addType(Params[i]->name, Params[i]->type);
        floatCounter+=2;
        }

        }else{
        std::cout << "        " << "sw $" << i + 4 + extraSize << "," << stack_size  << "($fp)" << std::endl; 
        extraSize += 1;
        std::cout << "        " << "sw $" << i + 4 + extraSize << "," << stack_size + 4 << "($fp)" << std::endl;
        }
        stack_size += pSize;
    }
    FuncStack->saved_stack = saved_stack;
    // rest of body
    FuncScope->OutputMIPS(FuncStack);
    // pop stack
    std::cout << "        " << "nop"<< std::endl;
	std::cout << "        " << "addu $sp,$fp,$0" << std::endl;
	std::cout << "        " << "lw $fp,"<<4<< "($sp)" << std::endl;
    std::cout << "        " << "nop"<< std::endl;
    std::cout << "        " << "lw $ra, 0($sp)" << std::endl;
    std::cout << "        " << "nop"<< std::endl;
	std::cout << "        " << "addiu $sp,$sp," << saved_stack << std::endl;
	std::cout << "        " << "jr $ra" << std::endl;
	std::cout << "        " << "nop"<< std::endl;
}
int Function::getStackSize(){
    return (FuncScope->getStackSize() + getParamSize());
    //std::cout << "DEBUG: " << getParamSize() << std::endl;
}
int Function::getParamSize(){
    return Decl->getParamSize();
}