#include "ast_RelationalOp.hpp"
#include <iostream>
void RelationalOp::OutputMIPS(Stack *stk, int regno){
    Lvalue->OutputMIPS(stk,regno);
    Rvalue->OutputMIPS(stk,regno+1);
    if(Operator == "<"){
        std::cout << "        " << "slt $" << regno << ", $" << regno  << ", $" << regno + 1 << std::endl;
        std::cout << "        " << "andi $" << regno << ", $" << regno  << ", 0x00ff" << std::endl;
    }else if(Operator == ">"){
        std::cout << "        " << "slt $" << regno << ", $" << regno + 1  << ", $" << regno << std::endl;
        std::cout << "        " << "andi $" << regno << ", $" << regno  << ", 0x00ff" << std::endl;
    }else if(Operator == "<="){
        std::cout << "        " << "slt $" << regno << ", $" << regno + 1  << ", $" << regno << std::endl;
        std::cout << "        " << "xori $" << regno << ", $" << regno  << ", 0x1" << std::endl;
        std::cout << "        " << "andi $" << regno << ", $" << regno  << ", 0x00ff" << std::endl;
    }else if(Operator == ">="){
        std::cout << "        " << "slt $" << regno << ", $" << regno  << ", $" << regno + 1 << std::endl;
        std::cout << "        " << "xori $" << regno << ", $" << regno  << ", 0x1" << std::endl;
        std::cout << "        " << "andi $" << regno << ", $" << regno  << ", 0x00ff" << std::endl;
    }else if(Operator == "=="){
        std::cout << "        " << "xor $" << regno << ", $" << regno  << ", $" << regno + 1 << std::endl;
        std::cout << "        " << "sltiu $" << regno << ", $" << regno  << ", 1" << std::endl;
        std::cout << "        " << "andi $" << regno << ", $" << regno  << ", 0x00ff" << std::endl;
    }else if(Operator == "!="){
        std::cout << "        " << "xor $" << regno << ", $" << regno  << ", $" << regno + 1 << std::endl;
        std::cout << "        " << "sltu $" << regno << ", $0"  << ", $" << regno  << std::endl;
        std::cout << "        " << "andi $" << regno << ", $" << regno  << ", 0x00ff" << std::endl;
    }
}
int RelationalOp::evalConst(){
    if(Operator == "<"){
        return (Lvalue->evalConst() < Rvalue->evalConst());
    } else if(Operator == ">"){
        return (Lvalue->evalConst() > Rvalue->evalConst());
    }else if(Operator == "<="){
        return (Lvalue->evalConst() <= Rvalue->evalConst());
    }else if(Operator == ">="){
        return (Lvalue->evalConst() >= Rvalue->evalConst());
    }else if(Operator == "=="){
        return (Lvalue->evalConst() == Rvalue->evalConst());
    }else{
        return (Lvalue->evalConst() != Rvalue->evalConst());
    }
}