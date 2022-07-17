#ifndef AST_ROOT_HPP
#define AST_ROOT_HPP
#include "ast_node.hpp"
#include "Scope/ast_globalscope.hpp"
#include "Functions/ast_stack.hpp"
#include <iostream>
class Root : public Node{
public: 
    GlobalScope *ScopeNode;
    Root(GlobalScope *gscope) : ScopeNode(gscope){}
    virtual void OutputMIPS();
    Stack *globalStack = new Stack();
};

#endif