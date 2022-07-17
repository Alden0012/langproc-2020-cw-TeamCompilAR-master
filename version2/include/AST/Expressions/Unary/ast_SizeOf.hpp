#ifndef AST_SIZEOF_HPP
#define AST_SIZEOF_HPP
#include "../ast_expression.hpp"
#include "../../ast_type.hpp"
#include <string>
class SizeOf : public Expression{
    public:
    SizeOf(Type *t) : type(t), Var(false){}
    SizeOf(std::string name) : VarName(name), Var(true){}
    virtual ~SizeOf(){}
    std::string VarName;
    bool Var;
    bool Index = false;
    Type *type;
    Expression *elements;
    virtual void OutputMIPS(Stack *stk,int regno);
};


#endif