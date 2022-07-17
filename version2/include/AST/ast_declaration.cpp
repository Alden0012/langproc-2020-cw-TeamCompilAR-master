#include "ast_declaration.hpp"
#include <iostream>
void Declaration::OutputMIPS(){
    if(!fdef){
        std::cout << "        " << ".data" << std::endl;
        std::cout << "        " << ".globl " << name << std::endl;
        std::cout << "        " << ".size " << name << ", " << (type->array ? type->arrSize : type->size) << std::endl;
        std::cout << name << ":" << std::endl;
        if(initializer || initList){
            if(!type->array){
                std::cout << "        " << ".word " << initializer->evalConst() << std::endl;
            }else{
                for(int i = 0;i < initList->size();i++){
                std::cout << "        " << ".word " << (*initList)[i]->evalConst() << std::endl;
         }
            }
        }

    }
}
void Declaration::OutputMIPS(Stack *stk){
    if(stk->getType(name)->Global){
        std::cout << "        " << ".data" << std::endl;
        std::cout << "        " << ".globl " << name << std::endl;
        std::cout << "        " << ".size " << name << " " << (stk->getType(name)->array ? stk->getType(name)->arrSize : stk->getType(name)->size) << std::endl;
        if(!type->array || type->pointer){
        if(initializer){
            if(!stk->getType(name)->array){
                if(stk->getType(name)->value_type != Types::T_FLOAT){
                std::cout << "        " << ".word " << initializer->evalConst() << std::endl;
                }else{
                std::cout << "        " << ".word " << initializer->evalConst() << std::endl;    
                }
            }
        }
        }
    }else{
        if(!type->array || type->pointer){
        if(initializer){
            initializer->OutputMIPS(stk,8);
            int stackOffset = stk->getOffset(name);
            if(type->value_type == Types::T_FLOAT && !(type->pointer)){
            std::cout << "        " << "swc1 $f0, " << stackOffset << "($fp)" << std::endl;
        }else{
            std::cout << "        " << "sw $8, " << stackOffset << "($fp)" << std::endl;
        }
        }}else{
            if(initList){
            int stackOffset = stk->getOffset(name);
            for(int i = 0;i < initList->size();i++){
                (*initList)[i]->OutputMIPS(stk,8);
                if((*initList)[i]->checkFloat(stk)){
                std::cout << "        " << "swc1 $f0, " << stackOffset+(i*stk->getType(name)->size) << "($fp)" << std::endl;
                }else{
                std::cout << "        " << "sw $8, " << stackOffset+(i*stk->getType(name)->size) << "($fp)" << std::endl;    
                }
            }
            }
        }
    }
}
int Declaration::returnDeclSize(){
    if(type->array){
        return ((type->size)*ArraySize);
    }else if(type->pointer){
        return 4;
    }
    else{
        return type->size;
    }
}