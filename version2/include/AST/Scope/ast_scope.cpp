#include "ast_scope.hpp"
#include <iostream>
int Scope::getStackSize(){
    int temp = 0;
    for(int i = 0;i < Declarations->size();i++){
        temp += (*Declarations)[i]->returnDeclSize();
    }
    for(int i = 0;i < Statements->size();i++){
        temp += (*Statements)[i]->returnSize();
    }
    return temp;
}
int Scope::getDeclSize(){
    int temp = 0;
    for(int i = 0;i < Declarations->size();i++){
        temp += (*Declarations)[i]->returnDeclSize();
    }
    return temp;
}
int Scope::PopulateStack(Stack *stk,int star){
    int start = star;
    for(int i = 0;i < Declarations->size();i++){
        if(((*Declarations)[i]->returnDeclSize()) != 1 && (start / 4 != 0)){
            start += start%4;
        }
        stk->add((*Declarations)[i]->name, (start));
        stk->addType((*Declarations)[i]->name,(*Declarations)[i]->type);
        start += (*Declarations)[i]->returnDeclSize();
        //std::cout << (*Declarations)[i]->name << " " << (8+i*4) << std::endl;
    }
    stk->size = start;
    return start;
}
void Scope::OutputMIPS(Stack *FuncStack){
    for(int i = 0;i < Declarations->size();i++){
        (*Declarations)[i]->OutputMIPS(FuncStack);
    }
    for(int i = 0;i < Statements->size();i++){
        (*Statements)[i]->OutputMIPS(FuncStack);
    }
}
std::vector<std::tuple<std::string, int, bool> *> Scope::returnLabels(Stack *stk){
    std::vector<std::tuple<std::string, int, bool> *> labels;
    for(int i = 0;i<Statements->size();i++){
        if((*Statements)[i]->returnLabel(stk))
        labels.push_back((*Statements)[i]->returnLabel(stk));
    }
    return labels;
}