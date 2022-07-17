#include "ast_floatConst.hpp"
#include <iostream>
#include "../../ast_PostProc.hpp"
#include "../../ast_MakeLabel.hpp"
void FloatConst::OutputMIPS(Stack *stk, int regno){
    std::string n = MakeLabel("FloatLiteral");
    std::cout << "        " << "lwc1 $" << regno-8 << ", " << n << std::endl;
    AddPostProc(n,*((uint32_t*) &fvalue));
}