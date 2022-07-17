#include "ast_ReturnStatement.hpp"
#include <iostream>
void ReturnStatement::OutputMIPS(Stack *stk){
    if(stk->retType->value_type != Types::T_FLOAT || stk->retType->pointer){
    Expr->OutputMIPS(stk,2);
    }else{
    Expr->OutputMIPS(stk,8);
    }
    std::cout << "        " << "nop"<< std::endl;
	std::cout << "        " << "addu $sp,$fp,$0" << std::endl;
	std::cout << "        " << "lw $fp,"<<4<< "($sp)" << std::endl;
    std::cout << "        " << "nop"<< std::endl;
    std::cout << "        " << "lw $ra, 0($sp)" << std::endl;
    std::cout << "        " << "nop"<< std::endl;
    std::cout << "        " << "addiu $sp,$sp," << stk->saved_stack << std::endl;
	std::cout << "        " << "jr $ra" << std::endl;
	std::cout << "        " << "nop"<< std::endl;
}