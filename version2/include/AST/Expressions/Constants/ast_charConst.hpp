#ifndef AST_CHARCONST_HPP
#define AST_CHARCONST_HPP
#include "../ast_expression.hpp"
class CharConst : public Expression {
    public:
    CharConst(char c) : val(c){}
    virtual ~CharConst(){}
    char val;
    virtual void OutputMIPS(Stack *stk,int regno);
    virtual int evalConst(){return (int)val;}
};


#endif