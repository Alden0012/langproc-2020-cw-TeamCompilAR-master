#ifndef AST_RELATIONALOP_HPP
#define AST_RELATIONALOP_HPP
#include "../ast_expression.hpp"

class RelationalOp : public Expression{
    public:
    RelationalOp(Expression *lv,Expression *rv,std::string op) : Lvalue(lv), Rvalue(rv), Operator(op){}
    virtual ~RelationalOp(){}
    Expression *Lvalue;
    Expression *Rvalue;
    std::string Operator;
    virtual void OutputMIPS(Stack *stk,int regno);
    virtual int evalConst();
};

#endif