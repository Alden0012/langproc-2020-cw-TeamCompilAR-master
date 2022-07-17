#include "ast_UnaryOp.hpp"
#include <iostream>
#include "../ast_variable.hpp"
void UnaryOp::OutputMIPS(Stack *stk, int regno){
    Expr->OutputMIPS(stk,regno);
    //std::cout << "operator :" << Operator << std::endl;
    if(Operator == "-"){
        std::cout << "        " << "subu $" << regno << ", $0, $" << regno << std::endl;
        
    }
    else if(Operator == "~" ){
        std::cout << "        " << "nor $" << regno << ", $0, $" << regno << std::endl;
    }
    else if(Operator == "!"){
        std::cout << "        " << "sltu $" << regno << ", $" << regno << ", 1" << std::endl;
        std::cout << "        " << "andi $" << regno << ", $" << regno << ", 0x00ff" << std::endl;
    }
    else if(Operator == "*"){
        if(!Expr->checkFloat(stk)){
            if(Expr->checkSize(stk) == 1){
        std::cout << "        " << "lb $" << regno << ", 0($" << regno << ")" << std::endl; 
            }else{
        std::cout << "        " << "lw $" << regno << ", 0($" << regno << ")" << std::endl;
            }
        }
        else{
        std::cout << "        " << "lwc1 $f" << regno-8 << ", 0($" << regno << ")" << std::endl;
        }
    }else if(Operator == "&"){
        int offset = dynamic_cast<Variable *>(Expr)->getStackOffset(stk);
        std::cout << "        " << "addiu $" << regno << ", $fp, " << offset << std::endl;
    }

}
