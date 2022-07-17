#include "ast_BreakStatement.hpp"
#include <iostream>
#include <string>
void BreakStatement::OutputMIPS(Stack *stk){
    if(stk->ScopeEND != ""){
        std::cout << "        " << "j " << stk->ScopeEND << std::endl;
        std::cout << "        " << "nop" << std::endl;
    }
}