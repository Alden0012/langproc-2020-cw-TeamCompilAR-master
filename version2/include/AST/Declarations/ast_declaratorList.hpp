#ifndef AST_DECLARATORLIST_HPP
#define AST_DECLARATORLIST_HPP
#include "../ast_declaration.hpp"
#include "../ast_type.hpp"
#include <vector>
class DeclaratorList : public Declaration{ // type followed by a bunch of decls
public:
    Type *type;
    std::vector<Declaration *> *Decls;
    std::vector<Declaration *> returnDecls();
};
#endif