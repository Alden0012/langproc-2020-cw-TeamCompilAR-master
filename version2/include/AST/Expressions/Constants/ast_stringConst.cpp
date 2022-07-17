#include "ast_stringConst.hpp"
#include <iostream>
#include "../../ast_PostProc.hpp"
#include "../../ast_MakeLabel.hpp"
void StringConst::OutputMIPS(Stack *stk, int regno){
    std::string n = MakeLabel("StringLiteral");
    std::cout << "        " << "la $" << regno << ", " << n << std::endl;
    AddPostProc(n,str);
}