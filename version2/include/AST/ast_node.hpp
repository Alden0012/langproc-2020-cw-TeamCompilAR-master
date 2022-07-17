#ifndef AST_NODE_HPP
#define AST_NODE_HPP
class Node{
public:
    Node(){}
    virtual ~Node(){}
    void PrintDebug();
    virtual void OutputMIPS(){}
};
typedef Node *NodePtr;
#endif