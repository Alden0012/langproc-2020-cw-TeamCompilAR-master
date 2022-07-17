#ifndef AST_EXPRSTATEMENT_HPP
#define AST_EXPRSTATEMENT_HPP
#include "ast_statement.hpp"
#include "../Expressions/ast_expression.hpp"
class ExprStatement : public Statement{
public:
    ExprStatement(Expression *e) : expr(e){}
    virtual ~ExprStatement(){}
    Expression *expr;
    Expression *getExpression(){return expr;}
    virtual int returnSize(){return 0;}
    virtual void OutputMIPS(Stack *stk);
};

#endif