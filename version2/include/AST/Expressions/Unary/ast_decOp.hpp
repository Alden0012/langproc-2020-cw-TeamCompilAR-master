#ifndef AST_DECOP_HPP
#define AST_DECOP_HPP
#include "../ast_expression.hpp"
#include <string>
class DecOp : public Expression{
    public:
    DecOp(std::string s) : Var(s){}
    virtual ~DecOp(){}
    std::string Var;
    virtual void OutputMIPS(Stack *stk,int regno);
    virtual bool isPointer(Stack *stk){return stk->getType(Var)->pointer;}
    virtual int checkSize(Stack *stk){return stk->getType(Var)->size;}
};
#endif