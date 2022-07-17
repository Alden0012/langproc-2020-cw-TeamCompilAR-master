#include "ast_CaseStatement.hpp"
#include <iostream>
#include <tuple>
void CaseStatement::OutputMIPS(Stack *stk){
    std::cout << labelName << ":" << std::endl;
}
std::tuple<std::string, int, bool> *CaseStatement::returnLabel(Stack *stk){
    if(expr){
    int value = expr->evalConst();
    std::tuple<std::string, int, bool> *tuple = new std::tuple<std::string, int, bool>;
    *(tuple) = std::make_tuple(labelName,value,false);
    return tuple;
    }else{
    std::tuple<std::string, int, bool> *tuple = new std::tuple<std::string, int, bool>;
    *(tuple) = std::make_tuple(labelName,0,true);    
    return tuple;
    }
}