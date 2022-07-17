#include "ast_WhileStatement.hpp"
#include <iostream>
#include <string>
#include "../ast_MakeLabel.hpp"
void WhileStatement::OutputMIPS(Stack *stk){
    *(BodyStack) = *(stk);
    Body->PopulateStack(BodyStack,stk->size);
    std::string WhileBody = MakeLabel("WhileBody");
    BodyStack->ScopeBody = WhileBody;
    std::string WhileEND = MakeLabel("WhileESC");
    BodyStack->ScopeEND = WhileEND;
    std::cout << WhileBody << ":" << std::endl;
    Condition->OutputMIPS(stk,8);
    std::cout << "        " << "beq $8, $0, " << WhileEND << std::endl;
    std::cout << "        " << "nop" << std::endl;
    Body->OutputMIPS(BodyStack);
    std::cout << "        " << "j " << WhileBody << std::endl;
    std::cout << "        " << "nop" << std::endl;
    std::cout << WhileEND << ":" << std::endl;
}