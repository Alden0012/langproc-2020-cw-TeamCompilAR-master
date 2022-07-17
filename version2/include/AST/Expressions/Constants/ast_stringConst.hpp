#ifndef AST_STRINGCONST_HPP
#define AST_STRINGCONST_HPP
#include "../ast_expression.hpp"
#include <string>
class StringConst : public Expression{
    public:
    StringConst(std::string s) : str(s){}
    virtual ~StringConst(){}
    virtual void OutputMIPS(Stack *stk,int regno);
    std::string str;
};
#endif