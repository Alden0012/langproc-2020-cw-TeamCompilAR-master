#ifndef AST_ADDITIVE_HPP
#define AST_ADDITIVE_HPP
#include "../ast_expression.hpp"
#include <string>
class AdditiveOp : public Expression{
public:
    AdditiveOp(Expression *lv,Expression *rv,std::string op) : Lvalue(lv), Rvalue(rv), Operator(op){}
    virtual ~AdditiveOp(){}
    Expression *Lvalue;
    Expression *Rvalue;
    std::string Operator;
    virtual bool checkFloat(Stack *stk){return (Lvalue->checkFloat(stk) || Rvalue->checkFloat(stk));}
    virtual void OutputMIPS(Stack *stk,int regno);
    virtual int evalConst();
    virtual bool isPointer(Stack *stk){return (Lvalue->isPointer(stk)||Rvalue->isPointer(stk));}
};


#endif