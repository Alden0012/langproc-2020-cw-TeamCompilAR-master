#include "ast_BitwiseOp.hpp"
#include <iostream>
void BitwiseOp::OutputMIPS(Stack *stk, int regno){
    Lvalue->OutputMIPS(stk,regno);
    Rvalue->OutputMIPS(stk,regno+1);
    if(Operator == "&"){
        std::cout << "        " << "and $" << regno << ", $" << regno  << ", $" << regno + 1<< std::endl;
    }else if(Operator == "|"){
        std::cout << "        " << "or $" << regno << ", $" << regno  << ", $" << regno + 1<< std::endl;
    }else if(Operator == "^"){
        std::cout << "        " << "xor $" << regno << ", $" << regno  << ", $" << regno + 1<< std::endl;
    }   

}
int BitwiseOp::evalConst(){
    if(Operator == "&"){
        return (Lvalue->evalConst() & Rvalue->evalConst());
    }else if(Operator == "|"){
        return (Lvalue->evalConst() | Rvalue->evalConst());
    }else if(Operator == "^"){
        return (Lvalue->evalConst() ^ Rvalue->evalConst());
    }
}