#include "ast_MultiplicativeOp.hpp"
#include <iostream>
void MultiplicativeOp::OutputMIPS(Stack *stk, int regno){
    if(!checkFloat(stk)){
        Lvalue->OutputMIPS(stk,regno);
        Rvalue->OutputMIPS(stk,regno+1);
    if(Operator == "*"){
        std::cout << "        " << "mult $" << regno << ", $" << regno+1 << std::endl;
        std::cout << "        " << "mflo $" << regno << std::endl;
    }else if(Operator == "/"){
        std::cout << "        " << "div $" << regno << ", $" << regno+1 << std::endl;
        std::cout << "        " << "mflo $" << regno << std::endl;
    }else if(Operator == "%"){
        std::cout << "        " << "div $" << regno << ", $" << regno+1 << std::endl;
        std::cout << "        " << "mfhi $" << regno << std::endl;
    }
    }else{
    if(Operator == "*"){
        Lvalue->OutputMIPS(stk,regno+1);
        Rvalue->OutputMIPS(stk,regno+2);
        std::cout << "        " << "mul.s $f" << regno-8 << ", $f" << (regno+1)-8  << ", $f" << (regno + 2)-8<< std::endl;
    }else{
        std::cout << "        " << "div.s $f" << regno-8 << ", $f" << (regno+1)-8  << ", $f" << (regno + 2)-8<< std::endl;
    }
    }
}
int MultiplicativeOp::evalConst(){
    if(Operator == "*"){
        return Lvalue->evalConst() * Rvalue->evalConst();
    }else if(Operator == "/"){
        return Lvalue->evalConst() / Rvalue->evalConst();
    }else if(Operator == "%"){
        return Lvalue->evalConst() % Rvalue->evalConst();
    }
}