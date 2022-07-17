#ifndef AST_DECLARATIONLIST_HPP
#define AST_DECLARATIONLIST_HPP
#include "ast_declaratorList.hpp"
#include <vector>
class DeclarationList : public Node{
    public:
    std::vector<DeclaratorList *> *Decl;
    std::vector<Declaration *> returnDecls();
};

#endif