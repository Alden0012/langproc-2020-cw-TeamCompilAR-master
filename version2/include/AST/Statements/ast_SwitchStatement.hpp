#ifndef AST_SWITCHSTATEMENT_HPP
#define AST_SWITCHSTATEMENT_HPP
#include "ast_statement.hpp"
#include "../Expressions/ast_expression.hpp"
#include "../Scope/ast_scope.hpp"
#include "../Functions/ast_stack.hpp"
class SwitchStatement : public Statement{
    public:
    SwitchStatement(Expression *e,Scope *s) : expr(e), Body(s){}
    virtual ~SwitchStatement(){}
    virtual void OutputMIPS(Stack *stk);
    Scope *Body = new Scope;
    Stack *BodyStack = new Stack;
    Expression *expr;
    
};

#endif