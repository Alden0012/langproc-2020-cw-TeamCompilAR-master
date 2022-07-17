#ifndef AST_BITWISE_OP
#define AST_BITWISE_OP
#include "../ast_expression.hpp"
class BitwiseOp : public Expression{
    public:
    BitwiseOp(Expression *lv,Expression *rv,std::string op) : Lvalue(lv), Rvalue(rv), Operator(op){}
    virtual ~BitwiseOp(){}
    Expression *Lvalue;
    Expression *Rvalue;
    std::string Operator;
    virtual void OutputMIPS(Stack *stk,int regno);
    virtual int evalConst();
};
#endif