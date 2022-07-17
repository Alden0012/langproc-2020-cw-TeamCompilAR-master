#ifndef AST_FUNCTIONDECL_HPP
#define AST_FUNCTIONDECL_HPP
#include "../ast_declaration.hpp"
#include "../ast_type.hpp"
#include "../Scope/ast_scope.hpp"
#include <vector>
#include <string>
class FunctionDecl : public Declaration{
public:
    FunctionDecl(Declaration *decl){name = decl->name;}
    std::vector<Declaration *> Params;
    bool fdef  = true;
    Type *type = nullptr;
    Scope *ParamScope;
    void CopyParams();
    int getParamSize();
    std::string name;

};

#endif