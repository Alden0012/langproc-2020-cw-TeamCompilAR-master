#ifndef AST_EXPRESSION_HPP
#define AST_EXPRESSION_HPP
#include "../ast_node.hpp"
#include "../Functions/ast_stack.hpp"
#include <vector>
class Expression : public Node{
    public:
    Expression(){}
    bool isFloat = false;
    virtual ~Expression(){};
    virtual bool checkFloat(Stack *stk){return false;}
    virtual void OutputMIPS(Stack *stk,int regno)=0;
    virtual int evalConst(){return 0;};
    virtual bool isPointer(Stack *stk){return false;}
    virtual int checkSize(Stack *stk){return 4;}
};
typedef std::vector<Expression *> *ExprListPtr; 
#endif