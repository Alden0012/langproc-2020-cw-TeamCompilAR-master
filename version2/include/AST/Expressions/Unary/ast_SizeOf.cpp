#include "ast_SizeOf.hpp"
#include <iostream>
void SizeOf::OutputMIPS(Stack *stk, int regno){
    if(!Var){
    if(!elements){
    int size = (type->size);
    std::cout << "        " << "li $" << regno << ", " << size << std::endl;
    }else{
        elements->OutputMIPS(stk,regno+1);
        int size = (type->size);
        std::cout << "        " << "li $" << regno << ", " << size << std::endl;
        std::cout << "        " << "mult $" << regno << ", " << regno +1 << std::endl;
        std::cout << "        " << "mflo $" << regno << std::endl;
    }
    }else{
        type = stk->getType(VarName);
        int size;
        if(type->pointer){
            size = 4;
        }
        else if(type->array && !Index){
            size = (type->size)*type->arrSize;
        }else{
            size = (type->size);
        }
        std::cout << "        " << "li $" << regno << ", " << size << std::endl;

    }
}