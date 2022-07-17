#ifndef AST_TYPE_HPP
#define AST_TYPE_HPP
#include "ast_node.hpp"
#include <string>
enum Types{T_VOID,T_INT,T_FLOAT,T_DOUBLE,T_UNSIGNED,T_CHAR,T_SIGNED};

class Type : public Node{
 public:
    Types value_type; 
    int size;
    bool pointer = false;
    bool Global = false;
    bool array = false;
    int arrSize;
    Type(std::string inputType); 
};


#endif