#include "ast_root.hpp"
#include <iostream>
void Root::OutputMIPS(){
    ScopeNode->OutputMIPS(globalStack);
    //std::cout << ".end";
}