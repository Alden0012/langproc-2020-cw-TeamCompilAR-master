#include "ast_declaratorList.hpp"

std::vector<Declaration *> DeclaratorList::returnDecls(){
    std::vector<Declaration *> temp = *(Decls);
    for(int i = 0;i < temp.size();i++){
        temp[i]->type = type;
    }
}