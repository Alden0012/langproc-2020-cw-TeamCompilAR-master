#ifndef AST_FUNCTIONCALL_HPP
#define AST_FUNCTIONCALL_HPP
#include "ast_statement.hpp"
#include <string>
#include <vector>
#include "../Expressions/ast_expression.hpp"
class FunctionCall : public Expression{
public:
    FunctionCall(std::string n, std::vector<Expression *> *A) : name(n), Args(A){};
    FunctionCall(std::string n) : name(n){}
    virtual ~FunctionCall(){}
    std::string name;
    std::vector<Expression *> *Args = new std::vector<Expression *>();
    virtual void OutputMIPS(Stack *stk,int regno);
};

#endif