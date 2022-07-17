#ifndef AST_FLOATCONST_HPP
#define AST_FLOATCONST_HPP
#include "../ast_expression.hpp"

class FloatConst : public Expression{
public:
    FloatConst(float v) : fvalue(v){}
    virtual ~FloatConst(){}
    float fvalue;

    virtual void OutputMIPS(Stack *stk,int regno);
    virtual int evalConst(){return *((uint32_t*) &fvalue);}
};

#endif