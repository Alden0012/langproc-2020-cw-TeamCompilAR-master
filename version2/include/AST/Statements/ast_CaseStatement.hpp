#ifndef AST_CASESTATEMENT_HPP
#define AST_CASESTATEMENT_HPP
#include "ast_statement.hpp"
#include "../Expressions/ast_expression.hpp"
#include "../ast_MakeLabel.hpp"
class CaseStatement : public Statement{
public:
CaseStatement(Expression *e): expr(e){}
CaseStatement(){}
Expression *expr;
std::string labelName = MakeLabel("Case");
virtual ~CaseStatement(){}
virtual void OutputMIPS(Stack *stk);
virtual std::tuple<std::string, int, bool> *returnLabel(Stack *stk);

};

#endif