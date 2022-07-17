#include "ast_FunctionCall.hpp"
#include <iostream>
void FunctionCall::OutputMIPS(Stack *stk, int regno){
    //push stack and store temporaries
    std::cout << "        " <<  "addiu $sp, $sp, -36" << std::endl;
    for(int i = 8;i < 16;i++){
        std::cout << "        " << "sw $" << i << ", " << (i-8)*4 << "($sp)" << std::endl;
    }
    std::cout << "        " << "sw $2" << ", " << 32 << "($sp)" << std::endl;
    //load args
    if(Args){
    for(int i = 0;i < Args->size();i++){
        (*Args)[i]->OutputMIPS(stk,i+4);
    }
    }
    //jump
    std::cout << "        " << "jal " << name << std::endl;
    std::cout << "        " << "nop" <<std::endl;
    std::cout << "        " << "addu $" << regno << ", $2, $0" << std::endl;
    if(regno != 2){
        std::cout << "        " << "lw $2" << ", " << 32 << "($sp)" << std::endl;
    }
    //pop stack and restore temporaries
    for(int i = 8;i < 16;i++){
        if(i != regno){
        std::cout << "        " << "lw $" << i << ", " << (i-8)*4 << "($sp)" << std::endl;
        }
    }
    std::cout << "        " <<  "addiu $sp, $sp, 32" << std::endl;

}