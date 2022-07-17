#ifndef AST_LOGICALOP_HPP
#define AST_LOGICALOP_HPP
#include "../ast_expression.hpp"
#include "../../ast_MakeLabel.hpp"
class LogicalOp : public Expression{
public:
    LogicalOp(Expression *lv,Expression *rv,std::string op) : Lvalue(lv), Rvalue(rv), Operator(op){}
    virtual ~LogicalOp(){}
    Expression *Lvalue;
    Expression *Rvalue;
    std::string Operator;
    virtual void OutputMIPS(Stack *stk,int regno);
    virtual int evalConst();
};

#endif