#include "ast_arrayIndex.hpp"
#include <iostream>
void ArrayIndex::OutputMIPS(Stack *stk, int regno){
    if(!(stk->getType(name)->pointer)){
    int stkOffset = stk->getOffset(name);
    index->OutputMIPS(stk,regno); // load index expression into register regno+1
    std::cout << "        " << "li $" << regno+1 << ", " << stk->getType(name)->size << std::endl;
    std::cout << "        " << "mult $"<< regno + 1 << ", $" << regno << std::endl;
    std::cout << "        " << "mflo $"<< regno << std::endl;
    if(stk->getType(name)->Global){
    std::cout << "        " << "la $" << regno +1 << ", "<< name << std::endl;
    std::cout << "        " << "addu $" << regno << ", $" << regno+1 <<", $" << regno <<std::endl;
    if(stk->getType(name)->size == 1){
    std::cout << "        " << "lb $" << regno << ", " << 0 << "($" << regno << ")" << std::endl;
    }else{
    std::cout << "        " << "lw $" << regno << ", " << 0 << "($" << regno << ")" << std::endl;
    }
    std::cout << "        " << "nop" << std::endl;    
    }else{ 
    std::cout << "        " << "addiu $" << regno +1 << ",$fp," << stkOffset <<std::endl;
    std::cout << "        " << "addu $" << regno << ", $" << regno+1 <<", $" << regno <<std::endl;
    if(stk->getType(name)->size == 1){
    std::cout << "        " << "lb $" << regno << ", " << 0 << "($" << regno << ")" << std::endl;
    }else{
    std::cout << "        " << "lw $" << regno << ", " << 0 << "($" << regno << ")" << std::endl;
    }
    std::cout << "        " << "nop" << std::endl;
    }
    }else{
        int stkOffset = stk->getOffset(name);
        index->OutputMIPS(stk,regno);
        std::cout << "        " << "li $" << regno+1 << ", " << stk->getType(name)->size << std::endl;
        std::cout << "        " << "mult $"<< regno + 1 << ", $" << regno << std::endl;
        std::cout << "        " << "mflo $"<< regno +1 << std::endl;
        if(stk->getType(name)->Global){
        std::cout << "        " << "lw $" << regno << ", " << name << std::endl;
        std::cout << "        " << "addu $" << regno << ", $" << regno << ", $" << regno+1 << std::endl;
        if(stk->getType(name)->size == 1){
        std::cout << "        " << "lb $" << regno << ", " << 0 << "($" << regno << ")" << std::endl;
        }else{
        std::cout << "        " << "lw $" << regno << ", " << 0 << "($" << regno << ")" << std::endl;
        }
        std::cout << "        " << "nop" << std::endl;
        }else{
        std::cout << "        " << "lw $" << regno << ", " << stkOffset << "($fp)" << std::endl;
        std::cout << "        " << "addu $" << regno << ", $" << regno << ", $" << regno+1 << std::endl;
        if(stk->getType(name)->size == 1){
        std::cout << "        " << "lb $" << regno << ", " << 0 << "($" << regno << ")" << std::endl;
        }else{
        std::cout << "        " << "lw $" << regno << ", " << 0 << "($" << regno << ")" << std::endl;
        }
        std::cout << "        " << "nop" << std::endl;
        }
    }
}