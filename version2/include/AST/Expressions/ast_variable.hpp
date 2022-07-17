#ifndef AST_VARIABLE_HPP
#define AST_VARIABLE_HPP
#include "ast_expression.hpp"
#include <string>
class Variable : public Expression{
    public: 
    Variable(std::string n) : name(n){}
    virtual ~Variable(){};
    std::string name;
    virtual void OutputMIPS(Stack *stk,int regno);
    virtual bool checkFloat(Stack *stk){return (stk->getType(name)->value_type == Types::T_FLOAT);}
    int getStackOffset(Stack *stk){return stk->getOffset(name);}
    virtual int evalConst(){exit(1);}
    virtual bool isPointer(Stack *stk){return (stk->getType(name)->pointer);}
    virtual int checkSize(Stack *stk){return stk->getType(name)->size;}
};

#endif