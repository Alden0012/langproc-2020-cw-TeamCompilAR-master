#ifndef AST_SHIFTOP_HPP
#define AST_SHIFTOP_HPP
#include "../ast_expression.hpp"
class ShiftOp : public Expression {
    public:
    ShiftOp(Expression *lv,Expression *rv,std::string op) : Lvalue(lv), Rvalue(rv), Operator(op){}
    virtual ~ShiftOp(){}
    Expression *Lvalue;
    Expression *Rvalue;
    std::string Operator;
    virtual void OutputMIPS(Stack *stk,int regno);
    virtual int evalConst();
};


#endif