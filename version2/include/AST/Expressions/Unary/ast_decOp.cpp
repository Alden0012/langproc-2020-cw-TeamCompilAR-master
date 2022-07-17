#include "ast_decOp.hpp"
#include <iostream>
void DecOp::OutputMIPS(Stack *stk, int regno){
    int stkOffset = stk->getOffset(Var);
    std::cout << "        " << "lw $" << regno << ", " << stkOffset << "($fp)" << std::endl;
    std::cout << "        " << "nop" << std::endl;
    if(stk->getType(Var)->pointer){    
    std::cout << "        " << "addiu $"<< regno <<", $"<< regno <<", -" << stk->getType(Var)->size <<std::endl;
    }else{
    std::cout << "        " << "addiu $"<< regno <<", $"<< regno <<", -1" <<std::endl;
    }
    std::cout << "        " << "sw $" << regno << ", " << stkOffset << "($fp)" << std::endl;
}