#ifndef AST_RETURNSTATEMENT_HPP
#define AST_RETURNSTATEMENT_HPP
#include "ast_statement.hpp"
#include "../Expressions/ast_expression.hpp"
class ReturnStatement : public Statement{
    public:
    ReturnStatement(Expression *e) : Expr(e){}
    virtual ~ReturnStatement(){}
    Expression *Expr;
    virtual int returnSize(){return 0;}
    virtual void OutputMIPS(Stack *stk);
};

#endif