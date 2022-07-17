#ifndef AST_MULTIPLICATIVE_HPP
#define AST_MULTIPLICATIVE_HPP
#include <string>
#include "../ast_expression.hpp"
class MultiplicativeOp : public Expression{
    public:
    MultiplicativeOp(Expression *lv,Expression *rv,std::string op) : Lvalue(lv), Rvalue(rv), Operator(op){}
    virtual ~MultiplicativeOp(){}
    Expression *Lvalue;
    Expression *Rvalue;
    std::string Operator;
    virtual bool checkFloat(Stack *stk){return (Lvalue->checkFloat(stk) || Rvalue->checkFloat(stk));}
    virtual void OutputMIPS(Stack *stk,int regno);
    virtual int evalConst();
};


#endif