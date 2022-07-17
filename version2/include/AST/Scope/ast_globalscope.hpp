#ifndef AST_GLOBALSCOPE_HPP
#define AST_GLOBALSCOPE_HPP
#include "../ast_node.hpp"
#include "../Functions/ast_functiondef.hpp"
#include "../Functions/ast_stack.hpp"
#include "../ast_declaration.hpp"
#include <vector>
class GlobalScope : public Node{
public:
    GlobalScope(){}
    std::vector<Function *> Functions;
    std::vector<Declaration*> Declarations;
    virtual void OutputMIPS(Stack *g);
    void mergeNode(Node *Input); 
    Stack *globalStack;
};

#endif