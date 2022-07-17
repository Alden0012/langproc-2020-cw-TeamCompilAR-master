#include "ast_ContinueStatement.hpp"
#include <iostream>
void ContinueStatement::OutputMIPS(Stack *stk){
    if(stk->ScopeBody != ""){
        std::cout << "        " << "j " << stk->ScopeBody << std::endl;
        std::cout << "        " << "nop" << std::endl;
    }
}