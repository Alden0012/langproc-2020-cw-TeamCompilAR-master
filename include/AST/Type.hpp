#ifndef Type_HPP
#define Type_HPP
#include "Node.hpp"
#include <string>

class Type : public Node{
public:
	enum Type_Name {T_INT,T_DOUBLE,T_FLOAT,T_CHAR,T_UNSIGNED,T_SIGNED,T_ENUM,T_AUTO,T_STRUCT};
	Type_Name type_n;
	Type(std::string s);
	int returnSize();
};

#endif 