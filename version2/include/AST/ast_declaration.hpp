#ifndef AST_DECLARATION_HPP
#define AST_DECLARATION_HPP
#include "ast_node.hpp"
#include "ast_type.hpp"
#include "Expressions/ast_expression.hpp"
#include "Functions/ast_stack.hpp"
#include <string>
#include <iostream>
#include <vector>
class Declaration : public Node{
public:
    Declaration(){}
    Declaration(std::string foo){name = foo;}
    //Scope *ParamScope;//only to be used in functions
    int returnDeclSize();
    std::string name;
    Type *type;
    bool fdef = false;
    Expression *initializer;
    std::vector<Expression *> *initList;
    //bool Array = false;
    //bool Pointer = false;
    int ArraySize;
    void OutputMIPS(Stack *stk);
    void OutputMIPS();
};
typedef std::vector<Declaration *> *DeclListPtr; 
#endif