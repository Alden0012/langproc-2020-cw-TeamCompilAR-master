#ifndef AST_FUNCTIONDEF_HPP
#define AST_FUNCTIONDEF_HPP
#include "../ast_node.hpp"
#include "../Scope/ast_scope.hpp"
#include "../ast_declaration.hpp"
#include "ast_functionDecl.hpp"
#include "ast_stack.hpp"
#include "../ast_type.hpp"
#include <string>
#include <vector>
class Function : public Node{
public:
    Function(FunctionDecl *Declr,Type *typ,Scope *Func) : Decl(Declr),retType(typ),FuncScope(Func){}
    Stack *FuncStack;
    FunctionDecl *Decl;
    Type *retType;
    bool retPointer;
    Scope *FuncScope;
    std::vector<Declaration *> getParams(){Decl->CopyParams(); return Decl->Params;}
    std::vector<Statement *> *getStatements(){return FuncScope->Statements;}
    std::vector<Declaration *> *getDeclarations(){return FuncScope->Declarations;}
    int getStackSize();
    int getParamSize();
    virtual void OutputMIPS(Stack *g);

};

#endif