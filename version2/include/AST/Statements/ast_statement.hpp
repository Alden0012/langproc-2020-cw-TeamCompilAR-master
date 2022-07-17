#ifndef AST_STATEMENTS_HPP
#define AST_STATEMENTS_HPP
#include "../Functions/ast_stack.hpp"
#include <vector>
#include <tuple>
class Statement : public Node{
    public:
    Statement(){}
    virtual ~Statement(){}
    virtual int returnSize(){return 0;}
    virtual void OutputMIPS(Stack *stk)=0;
    virtual std::tuple<std::string, int, bool> *returnLabel(Stack *stk){return nullptr;}
};
typedef std::vector<Statement *> *StatementListPtr; 

#endif