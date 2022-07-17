#ifndef AST_SCOPE_HPP
#define AST_SCOPE_HPP
#include "../ast_node.hpp"
#include "../ast_declaration.hpp"
#include "../Statements/ast_statement.hpp"
#include "../Declarations/ast_declarationList.hpp"
#include "../Functions/ast_stack.hpp"
#include <vector>
#include <tuple>
class Scope : public Node{
public:
    Scope(){}
    std::vector<Statement *> *Statements = new std::vector<Statement *>;
    std::vector<Declaration *> *Declarations = new std::vector<Declaration *>;
    DeclarationList *DeclList;
    void MergeDecl(Declaration *decl){Declarations->push_back(decl);}
    int getStackSize();
    int getDeclSize();
    int PopulateStack(Stack* stk,int star);
    void OutputMIPS(Stack *FuncStack);
    std::vector<std::tuple<std::string,int,bool> *> returnLabels(Stack *stk);
    //void Merge(Function *func);
};

#endif