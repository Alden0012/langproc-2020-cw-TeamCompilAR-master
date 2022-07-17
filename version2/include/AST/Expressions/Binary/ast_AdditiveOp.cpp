#include "ast_AdditiveOp.hpp"
#include <iostream>
void AdditiveOp::OutputMIPS(Stack *stk, int regno){
    Lvalue->OutputMIPS(stk,regno);
    Rvalue->OutputMIPS(stk,regno+1);
    if(checkFloat(stk)){
        if(Operator == "+"){
        std::cout << "        " << "add.s $f" << regno-8 << ", $f" << regno-8  << ", $f" << (regno + 1)-8<< std::endl;
        }
        if(Operator == "-"){
        std::cout << "        " << "sub.s $f" << regno-8 << ", $f" << regno-8  << ", $f" << (regno + 1)-8<< std::endl;
        }
    }else{
    if(Operator == "+"){
        if(Lvalue->isPointer(stk)){
         std::cout << "        " << "li $" << regno +2<< ", " << Lvalue->checkSize(stk) << std::endl;
         std::cout << "        " << "mult $" << regno +1 << ", $" << regno+2<< std::endl;
         std::cout << "        " << "mflo $" << regno+1 << std::endl;
         std::cout << "        " << "add $" << regno << ", $" << regno  << ", $" << regno + 1<< std::endl;
        }else if(Rvalue->isPointer(stk)){
         std::cout << "        " << "li $" << regno +2<< ", " << Rvalue->checkSize(stk) << std::endl;
         std::cout << "        " << "mult $" << regno +1 << ", $" << regno+2<< std::endl;
         std::cout << "        " << "mflo $" << regno+1 << std::endl;
         std::cout << "        " << "add $" << regno << ", $" << regno  << ", $" << regno + 1<< std::endl;
        }else{
        std::cout << "        " << "add $" << regno << ", $" << regno  << ", $" << regno + 1<< std::endl;
        }
    }
    if(Operator == "-"){
        if(Lvalue->isPointer(stk)){
         std::cout << "        " << "li $" << regno +2<< ", " << Lvalue->checkSize(stk) << std::endl;
         std::cout << "        " << "mult $" << regno +1 << ", $" << regno+2<< std::endl;
         std::cout << "        " << "mflo $" << regno+1 << std::endl;
         std::cout << "        " << "sub $" << regno << ", $" << regno  << ", $" << regno + 1<< std::endl;
        }else if(Rvalue->isPointer(stk)){
         std::cout << "        " << "li $" << regno +2<< ", " << Rvalue->checkSize(stk) << std::endl;
         std::cout << "        " << "mult $" << regno +1 << ", $" << regno+2<< std::endl;
         std::cout << "        " << "mflo $" << regno+1 << std::endl;
         std::cout << "        " << "sub $" << regno << ", $" << regno  << ", $" << regno + 1<< std::endl;
        }else{
        std::cout << "        " << "sub $" << regno << ", $" << regno  << ", $" << regno + 1 << std::endl;
        }
    }
    }
}
int AdditiveOp::evalConst(){
    if(Operator == "+"){
        return Lvalue->evalConst() + Rvalue->evalConst();
    }else{
        return Lvalue->evalConst() - Rvalue->evalConst();
    }
}