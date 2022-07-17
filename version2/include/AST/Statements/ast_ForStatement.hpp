#ifndef AST_FORSTATEMENT_HPP
#define AST_FORSTATEMENT_HPP
#include "ast_statement.hpp"
#include "../Expressions/ast_expression.hpp"
#include "../Scope/ast_scope.hpp"
#include "../Functions/ast_stack.hpp"
#include "../ast_declaration.hpp"
class ForStatement : public Statement{
    public:
    ForStatement(Statement *initializer,Statement *cond, Expression *iteration_expression, Scope* s) : init(initializer) , declared(false), condition(cond), iteration_expr(iteration_expression), Body(s) {}
    ForStatement(Declaration *initializer,Statement *cond, Expression *iteration_expression, Scope* s) : initial(initializer) , declared(true) , condition(cond), iteration_expr(iteration_expression), Body(s) {}
    ForStatement(Declaration *initializer,Statement *cond, Scope* s) : initial(initializer) , declared(true) , condition(cond), Body(s) {}
    ForStatement(Statement *initializer,Statement *cond, Scope* s) :  init(initializer) , declared(false), condition(cond), Body(s) {}
    virtual ~ForStatement(){}
    Statement *init;
    Declaration *initial;
    bool declared = false;
    Statement *condition; // stores to reg 8
    Expression *iteration_expr = nullptr;
    Stack *BodyStack = new Stack();
    Scope *Body = new Scope();
    virtual int returnSize(){return Body->getStackSize() + (declared ? initial->returnDeclSize() : 0);}
    virtual void OutputMIPS(Stack *stk);
};

#endif