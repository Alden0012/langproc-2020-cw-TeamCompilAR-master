#include "ast_IfElseStatement.hpp"
#include <iostream>
#include "../ast_MakeLabel.hpp"
#include <string>
void IfElseStatement::OutputMIPS(Stack *stk){
    *(TStack) = *(stk);
    TScope->PopulateStack(TStack,stk->size);
    *(FStack) = *(stk);
    FScope->PopulateStack(FStack,stk->size);
    Condition->OutputMIPS(stk,8);
    std::string FalseBranch = MakeLabel("IF_ElseBranch");
    std::string EndBranch = MakeLabel("IF_End");
    std::cout << "        " << "beq $8, $0," << FalseBranch << std::endl;
    std::cout << "        " << "nop" << std::endl;
    // True branch
    TScope->OutputMIPS(TStack);
    std::cout << "        " << "j " << EndBranch << std::endl;
    std::cout << FalseBranch << ":" << std::endl;
    FScope->OutputMIPS(FStack);
    std::cout << EndBranch << ":" <<std::endl;


}