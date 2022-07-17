#include "ast_AssignmentExpr.hpp"
#include <iostream>
void AssignmentExpr::OutputMIPS(Stack *stk, int regno){
    if(!AddressOf){
    if(!arrOffset){
        int variableOffset = stk->getOffset(varName);

        if(stk->getType(varName)->value_type == Types::T_FLOAT){
            expr->isFloat = true;
            expr->OutputMIPS(stk,regno);
            std::cout << "        " << "lwc1 " << "$f"<<(regno+1)-8<<", " << variableOffset << "($fp)" << std::endl;
            std::cout << "        " << "nop" << std::endl;
        }else{
        expr->OutputMIPS(stk,regno);
        std::cout << "        " << "lw " << "$"<<regno+1<<", " << variableOffset << "($fp)" << std::endl;
        std::cout << "        " << "nop" << std::endl;
        }

        if(Operator == '*'){
            std::cout << "        " << "mult $"<<regno<<", $"<<regno+1 << std::endl;
            std::cout << "        " << "mflo $"<<regno<< std::endl;
        }else if(Operator == '/'){
            std::cout << "        " << "div $"<<regno+1<<", $"<<regno << std::endl;
            std::cout << "        " << "mflo $"<<regno << std::endl;
        }else if(Operator == '%'){
            std::cout << "        " << "div $"<<regno+1<<", $"<< regno << std::endl;
            std::cout << "        " << "mfhi $"<<regno<< std::endl;
        }else if(Operator == '+'){
            std::cout << "        " << "add $"<<regno<<", $"<<regno<<", $"<<regno+1 << std::endl;
        }else if(Operator == '-'){
            std::cout << "        " << "sub $"<<regno<<", $"<<regno+1<<", $"<<regno << std::endl;
        }else if(Operator == '<'){
            std::cout << "        " << "sll $"<<regno<<", $"<<regno+1<<", $"<<regno << std::endl;
        }else if(Operator == '>'){
            std::cout << "        " << "sra $"<<regno<<", $"<<regno+1<<", $"<<regno << std::endl;
        }else if(Operator == '&'){
            std::cout << "        " << "and $"<<regno<<", $"<<regno+1<<", $"<<regno << std::endl;
        }else if(Operator == '^'){
            std::cout << "        " << "xor $"<<regno<<", $"<<regno+1<<", $"<<regno << std::endl;
        }else if(Operator == '|'){
            std::cout << "        " << "or $"<<regno<<", $"<<regno+1<<", $"<<regno<< std::endl;
        }else{

        }

        if(stk->getType(varName)->value_type == Types::T_FLOAT){
        std::cout << "        " << "swc1 " << "$f"<<regno-8<<", " << variableOffset << "($fp)" << std::endl;
        }else{
        std::cout << "        " << "sw " << "$"<<regno<<", " << variableOffset << "($fp)" << std::endl;
        }

    }else{
        int variableOffset = stk->getOffset(varName);
        expr->OutputMIPS(stk,regno);
        arrOffset->OutputMIPS(stk,regno + 1);
        if(Operator == '*'){
            std::cout << "        " << "mult $"<<regno<<", $"<<regno+1 << std::endl;
            std::cout << "        " << "mflo $"<<regno<< std::endl;
        }else if(Operator == '/'){
            std::cout << "        " << "div $"<<regno+1<<", $"<<regno << std::endl;
            std::cout << "        " << "mflo $"<<regno << std::endl;
        }else if(Operator == '%'){
            std::cout << "        " << "div $"<<regno+1<<", $"<< regno << std::endl;
            std::cout << "        " << "mfhi $"<<regno<< std::endl;
        }else if(Operator == '+'){
            std::cout << "        " << "add $"<<regno<<", $"<<regno<<", $"<<regno+1 << std::endl;
        }else if(Operator == '-'){
            std::cout << "        " << "sub $"<<regno<<", $"<<regno+1<<", $"<<regno << std::endl;
        }else if(Operator == '<'){
            std::cout << "        " << "sll $"<<regno<<", $"<<regno+1<<", $"<<regno << std::endl;
        }else if(Operator == '>'){
            std::cout << "        " << "sra $"<<regno<<", $"<<regno+1<<", $"<<regno << std::endl;
        }else if(Operator == '&'){
            std::cout << "        " << "and $"<<regno<<", $"<<regno+1<<", $"<<regno << std::endl;
        }else if(Operator == '^'){
            std::cout << "        " << "xor $"<<regno<<", $"<<regno+1<<", $"<<regno << std::endl;
        }else if(Operator == '|'){
            std::cout << "        " << " $"<<regno<<", $"<<regno+1<<", $"<<regno<< std::endl;
        }
        std::cout << "        " << "addiu $" << regno + 2 << ",$fp," << variableOffset <<std::endl;
        std::cout << "        " << "li $" << regno+3 << ", " << stk->getType(varName)->size << std::endl;
        std::cout << "        " << "mult $"<< regno + 3 << ", $" << regno+1 << std::endl;
        std::cout << "        " << "mflo $"<< regno+1 << std::endl;
        std::cout << "        " << "add $" << regno + 2 << ", $" << regno + 2 <<", $" << regno + 1 <<std::endl;
        std::cout << "        " << "sw $" << regno << ", " << 0 << "($" << regno + 2 << ")" << std::endl;
    }
    }else{
        expr->OutputMIPS(stk,regno);
        lvalue->OutputMIPS(stk,regno + 2);
        std::cout << "        " << "lw $" << regno+1 << ", 0($" << regno+2 << ")" << std::endl;
        if(Operator == '*'){
            std::cout << "        " << "mult $"<<regno<<", $"<<regno+1 << std::endl;
            std::cout << "        " << "mflo $"<<regno<< std::endl;
        }else if(Operator == '/'){
            std::cout << "        " << "div $"<<regno+1<<", $"<<regno << std::endl;
            std::cout << "        " << "mflo $"<<regno << std::endl;
        }else if(Operator == '%'){
            std::cout << "        " << "div $"<<regno+1<<", $"<< regno << std::endl;
            std::cout << "        " << "mfhi $"<<regno<< std::endl;
        }else if(Operator == '+'){
            std::cout << "        " << "add $"<<regno<<", $"<<regno<<", $"<<regno+1 << std::endl;
        }else if(Operator == '-'){
            std::cout << "        " << "subu $"<<regno<<", $"<<regno+1<<", $"<<regno << std::endl;
        }else if(Operator == '<'){
            std::cout << "        " << "sll $"<<regno<<", $"<<regno+1<<", $"<<regno << std::endl;
        }else if(Operator == '>'){
            std::cout << "        " << "sra $"<<regno<<", $"<<regno+1<<", $"<<regno << std::endl;
        }else if(Operator == '&'){
            std::cout << "        " << "and $"<<regno<<", $"<<regno+1<<", $"<<regno << std::endl;
        }else if(Operator == '^'){
            std::cout << "        " << "xor $"<<regno<<", $"<<regno+1<<", $"<<regno << std::endl;
        }else if(Operator == '|'){
            std::cout << "        " << "or $"<<regno<<", $"<<regno+1<<", $"<<regno<< std::endl;
        }
        std::cout << "        " << "sw $" << regno << ", 0($" << regno+2 << ")" << std::endl;
    }
}