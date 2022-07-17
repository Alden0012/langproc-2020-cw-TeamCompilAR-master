#include "ast_ForStatement.hpp"
#include <iostream>
#include <string>
#include "../ast_MakeLabel.hpp"
void ForStatement::OutputMIPS(Stack *stk){
    if(declared){
    stk->add(initial->name,stk->size);
    stk->addType(initial->name,initial->type);
    stk->size+=initial->returnDeclSize();
    initial->OutputMIPS(stk);
    }else{
        init->OutputMIPS(stk);
    }
    *(BodyStack) = *(stk);
    Body->PopulateStack(BodyStack,stk->size);
    std::string ForEnd = MakeLabel("ForEnd");
    BodyStack->ScopeEND = ForEnd;
    std::string ForBody = MakeLabel("ForBody");
    BodyStack->ScopeBody = ForBody;
    std::cout << ForBody << ":" << std::endl;
    condition->OutputMIPS(stk);
    std::cout << "        " << "beq $8, $0, " << ForEnd << std::endl;
    std::cout << "        " << "nop" << std::endl;
    Body->OutputMIPS(BodyStack);
    if(iteration_expr){
        iteration_expr->OutputMIPS(stk,8);
    }
    std::cout << "        " << "j " << ForBody << std::endl;
    std::cout << "        " << "nop" << std::endl;
    std::cout << ForEnd << ":" << std::endl;
}