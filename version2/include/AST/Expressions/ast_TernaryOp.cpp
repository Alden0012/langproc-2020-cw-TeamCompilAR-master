#include "ast_TernaryOp.hpp"
#include "../ast_MakeLabel.hpp"
#include <iostream>
void TernaryOp::OutputMIPS(Stack *stk, int regno){
    cond->OutputMIPS(stk,regno);
    std::string FalseBranch = MakeLabel("TernaryFalse");
    std::string ReturnBranch = MakeLabel("TernaryEnd");
    std::cout << "        " << "beq $" << regno << ", $0, " << FalseBranch << std::endl;
    std::cout << "        " << "nop" << std::endl;
    TrueRes->OutputMIPS(stk,regno);
    std::cout << "        " << "j " << ReturnBranch << std::endl;
    std::cout << "        " << "nop" << std::endl;
    std::cout << FalseBranch << ":" << std::endl;
    FalseRes->OutputMIPS(stk,regno);
    std::cout << ReturnBranch << ":" << std::endl;
}