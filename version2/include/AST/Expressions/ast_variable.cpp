#include "ast_variable.hpp"
#include <iostream>
void Variable::OutputMIPS(Stack *stk, int regno){ //make it work with globals;
    if(!(stk->getType(name)->array)){
    if(stk->getType(name)->Global){
      if(stk->getType(name)->value_type == Types::T_FLOAT && !(stk->getType(name)->pointer)){
          std::cout << "        " << "lwc1 $f" << regno-8 << ", " << name << std::endl;   
      }else{
      std::cout << "        " << "lw $" << regno << ", " << name << std::endl;
      }
      std::cout << "        " << "nop" << std::endl;
       
    }else{

    int stkOffset = stk->getOffset(name);
    //std::cout << name << " " << stkOffset << std::endl;
    if(stk->getType(name)->value_type == Types::T_FLOAT && !(stk->getType(name)->pointer)){
    std::cout << "        " << "lwc1 $f" << regno-8 << ", " << stkOffset << "($fp)" << std::endl;   
    }else{
    if(((stk->getType(name)->size == 1) && !stk->getType(name)->pointer)){
    std::cout << "        " << "lb $" << regno << ", " << stkOffset << "($fp)" << std::endl;
    }else{
    std::cout << "        " << "lw $" << regno << ", " << stkOffset << "($fp)" << std::endl;
    }
    }
    std::cout << "        " << "nop" << std::endl;

    }
    }else{
        if(stk->getType(name)->Global){
        std::cout << "        " << "la $" << regno << ", " << name << std::endl;   
        }else{
        int stkOffset = stk->getOffset(name);
        std::cout << "        " << "addiu $" << regno << ", $fp, " << stkOffset << std::endl;
        }
    }

}