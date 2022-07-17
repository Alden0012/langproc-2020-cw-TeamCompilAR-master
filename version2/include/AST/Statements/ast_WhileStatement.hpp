#ifndef AST_WHILESTATEMENT_HPP
#define AST_WHILESTATEMENT_HPP
#include "ast_statement.hpp"
#include "../Expressions/ast_expression.hpp"
#include "../Scope/ast_scope.hpp"
#include "../Functions/ast_stack.hpp"
class WhileStatement : public Statement{
    public:
    WhileStatement(Expression *e,Scope *s) : Condition(e), Body(s){}
    virtual ~WhileStatement(){}
    Expression *Condition;
    Stack *BodyStack = new Stack();
    Scope *Body = new Scope();
    virtual int returnSize(){return Body->getStackSize();}
    virtual void OutputMIPS(Stack *stk);
};
#endif