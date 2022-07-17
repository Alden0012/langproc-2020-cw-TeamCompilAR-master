#ifndef AST_UNARYOP_HPP
#define AST_UNARYOP_HPP
#include "../ast_expression.hpp"
#include <string>
class UnaryOp : public Expression{
    public:
     UnaryOp(Expression *Exp,std::string op) : Expr(Exp), Operator(op){}
     virtual ~UnaryOp(){}
     virtual void OutputMIPS(Stack *stk,int regno);
     std::string Operator;
     Expression *Expr;
};


#endif