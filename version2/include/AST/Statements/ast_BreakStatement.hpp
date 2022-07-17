#ifndef AST_BREAKSTATEMENT_HPP
#define AST_BREAKSTATEMENT_HPP
#include "ast_statement.hpp"
class BreakStatement : public Statement {
    public:
    BreakStatement(){}
    virtual ~BreakStatement(){}
    virtual void OutputMIPS(Stack *stk);

};


#endif