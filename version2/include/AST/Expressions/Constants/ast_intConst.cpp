#include "ast_intConst.hpp"
#include <iostream>
void IntConst::OutputMIPS(Stack *stk, int regno){
    std::cout << "        " << "li $" << regno << ", " << value << std::endl;
}