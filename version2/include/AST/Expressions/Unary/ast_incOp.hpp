#ifndef AST_INCOP_HPP
#define AST_INCOP_HPP
#include "../ast_expression.hpp"
#include <string>
class IncOp : public Expression{
    public:
    IncOp(std::string s) : Var(s){}
    virtual ~IncOp(){}
    std::string Var;
    virtual void OutputMIPS(Stack *stk,int regno);
    virtual bool isPointer(Stack *stk){return stk->getType(Var)->pointer;}
    virtual int checkSize(Stack *stk){return stk->getType(Var)->size;}

};
#endif