#ifndef AST_STACK_HPP
#define AST_STACK_HPP
#include <utility>
#include <map>
#include <string>
#include "../ast_node.hpp"
#include "../ast_type.hpp"
class Declaration;
class Stack : public Node{
    public:
    std::map<std::string ,int> stack_offsets;
    std::map<std::string, Type *>stack_decls;
    int size;
    int saved_stack;
    std::string ScopeEND;
    std::string ScopeBody;
    Type *retType;
    void add(std::string str,int offset){stack_offsets[str] = offset;}
    void addType(std::string str,Type *d){stack_decls[str] = d;}
    int getOffset(std::string str){return stack_offsets[str];}
    Type *getType(std::string str){return stack_decls[str];}

};

#endif