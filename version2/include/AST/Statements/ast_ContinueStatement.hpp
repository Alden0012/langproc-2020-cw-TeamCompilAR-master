#ifndef AST_CONTINUESTATEMENT_HPP
#define AST_CONTINUESTATEMENT_HPP
#include "ast_statement.hpp"
class ContinueStatement : public Statement {
public:
ContinueStatement(){}
virtual ~ContinueStatement(){}
virtual void OutputMIPS(Stack *stk);

}; 

#endif