#ifndef AST_ARRAYINDEX_HPP
#define AST_ARRAYINDEX_HPP
#include "ast_expression.hpp"

class ArrayIndex : public Expression{
public:
 ArrayIndex(){}
 virtual ~ArrayIndex(){}
 std::string name;
 Expression *index;
 virtual void OutputMIPS(Stack *stk,int regno);
}; 

#endif