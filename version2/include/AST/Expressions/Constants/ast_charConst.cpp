#include "ast_charConst.hpp"
#include <iostream>
void CharConst::OutputMIPS(Stack *stk, int regno){
    std::cout << "        " << "li $" << regno << ", " << (int)val << std::endl;
}