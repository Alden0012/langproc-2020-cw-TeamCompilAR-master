#ifndef AST_ASSIGNMENTEXPR_HPP
#define AST_ASSIGNMENTEXPR_HPP
#include "ast_expression.hpp"
#include <string>
class AssignmentExpr : public Expression{
    public:
    AssignmentExpr(std::string v,char o,Expression *e) : varName(v), Operator(o), expr(e){}
    AssignmentExpr(Expression *v,char o,Expression *e) : lvalue(v), Operator(o), expr(e){AddressOf = true;}
    AssignmentExpr(std::string v,char o,Expression *e,Expression *offset) : varName(v), Operator(o), expr(e), arrOffset(offset){}
    std::string varName;
    Expression *lvalue;
    bool AddressOf = false;
    char Operator;
    Expression *expr;
    Expression *arrOffset;
    virtual ~AssignmentExpr(){}
    virtual void OutputMIPS(Stack *stk,int regno);

};

#endif