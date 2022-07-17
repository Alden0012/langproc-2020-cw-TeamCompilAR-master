#ifndef AST_TERNARYOP_HPP
#define AST_TERNARYOP_HPP
#include "ast_expression.hpp"
class TernaryOp : public Expression {
    public:
    TernaryOp(Expression *c,Expression *t,Expression *f) : cond(c), TrueRes(t), FalseRes(f) {}
    virtual ~TernaryOp(){}
    Expression *cond;
    Expression *TrueRes;
    Expression *FalseRes;
    virtual void OutputMIPS(Stack *stk,int regno);
};
#endif