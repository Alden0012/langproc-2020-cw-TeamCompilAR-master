#ifndef AST_INTCONST_HPP
#define AST_INTCONST_HPP
#include "../ast_expression.hpp"
class IntConst : public Expression{
    public:
    IntConst(int v) : value(v) {}
    virtual ~IntConst(){}
    int value;
    virtual void OutputMIPS(Stack *stk,int regno);
    virtual int evalConst(){return value;}
};

#endif