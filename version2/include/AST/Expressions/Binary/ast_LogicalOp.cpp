#include "ast_LogicalOp.hpp"
#include <iostream>
void LogicalOp::OutputMIPS(Stack *stk, int regno){
    Lvalue->OutputMIPS(stk,regno);
    std::string Branch1;
    if(Operator == "&&"){
        
        Branch1 = MakeLabel("L_AND_B1");
        std::cout << "        " << "beq $" << regno << ", $0," <<  Branch1 << std::endl;
        std::cout << "        " << "nop" << std::endl;
    }else if(Operator == "||"){
        
        Branch1 = MakeLabel("L_OR_B1");
        std::cout << "        " << "bne $" << regno << ", $0," <<  Branch1 << std::endl;
        std::cout << "        " <<"nop" << std::endl;
    }
    Rvalue->OutputMIPS(stk,regno);
    std::string Branch2;
    std::string EndBranch = MakeLabel("L_LOG_R");
    if(Operator == "&&"){
        std::cout << "        " << "beq $" << regno << ", $0," <<  Branch1 << std::endl;
        std::cout << "        " << "nop" << std::endl;
        std::cout << "        " << "li $" << regno << ", 1" << std::endl;
        std::cout << "        " << "j " << EndBranch << std::endl;
        std::cout << "        " << "nop " << std::endl;
        std::cout << Branch1 << ":" << std::endl;
        std::cout << "        " << "li $" << regno << ", 0" << std::endl;
    }else if(Operator == "||"){
        Branch2 = MakeLabel("L_OR_B2");
        std::cout << "        " << "beq $" << regno << ", $0," <<  Branch2 << std::endl;
        std::cout << "        " << "nop" << std::endl;
        std::cout << Branch1 << ":" << std::endl;
        std::cout << "        " << "li $" << regno << ", 1" << std::endl;
        std::cout << "        " << "j " << EndBranch << std::endl;
        std::cout << "        " << "nop " << std::endl;
        std::cout << Branch2 << ":" << std::endl;
        std::cout << "        " << "li $" << regno << ", 0" << std::endl;

    }
    std::cout << EndBranch << ":" << std::endl;
}
int LogicalOp::evalConst(){
    if(Operator == "&&"){
        return (Lvalue->evalConst() && Rvalue->evalConst());
    }else{
        return (Lvalue->evalConst() || Rvalue->evalConst());
    }
}