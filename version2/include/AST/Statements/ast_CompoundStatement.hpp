#ifndef AST_COMPOUNDSTATEMENT_HPP
#define AST_COMPOUNDSTATEMENT_HPP
#include "ast_statement.hpp"
#include "../Scope/ast_scope.hpp"
#include "../Functions/ast_stack.hpp"
class CompoundStatement : public Statement{
public:
    CompoundStatement(Scope *s) : Body(s){}
    virtual ~CompoundStatement(){}
    Stack *BodyStack = new Stack();
    Scope *Body = new Scope();
    virtual int returnSize(){return Body->getStackSize();}
    virtual void OutputMIPS(Stack *stk);

};

#endif