#ifndef AST_IFELSE_STATEMENT_HPP
#define AST_IFELSE_STATEMENT_HPP
#include "ast_statement.hpp"
#include "../Expressions/ast_expression.hpp"
#include "../Functions/ast_stack.hpp"
#include "../Scope/ast_scope.hpp"
class IfElseStatement : public Statement{
    public:
    IfElseStatement(Expression *c, Scope *t) : Condition(c), TScope(t){}
    IfElseStatement(Expression *c, Scope *t, Scope *f) : Condition(c), TScope(t), FScope(f){}
    Expression *Condition;
    Stack *TStack = new Stack();
    Stack *FStack = new Stack();
    Scope *TScope = new Scope();
    Scope *FScope = new Scope();
    virtual ~IfElseStatement(){}
    virtual int returnSize(){return TScope->getStackSize() + FScope->getStackSize();}
    virtual void OutputMIPS(Stack *stk);
};

#endif