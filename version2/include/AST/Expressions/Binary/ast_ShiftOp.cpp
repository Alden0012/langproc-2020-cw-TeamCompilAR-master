#include "ast_ShiftOp.hpp"
#include <iostream>
void ShiftOp::OutputMIPS(Stack *stk, int regno){
    Lvalue->OutputMIPS(stk,regno);
    Rvalue->OutputMIPS(stk,regno+1);
    if(Operator == "<<"){
        std::cout << "        " << "sllv $" << regno << ", $" << regno << ", $" << regno + 1 << std::endl;
    }else if(Operator == ">>"){
        std::cout << "        " << "srav $" << regno << ", $" << regno  << ", $" << regno + 1<< std::endl;
    }

}
int ShiftOp::evalConst(){
    if(Operator == "<<"){
        return (Lvalue->evalConst() << Rvalue->evalConst());
    }else {
        return (Lvalue->evalConst() >> Rvalue->evalConst());
    }
}