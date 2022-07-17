#include "Type.hpp"

Type::Type(std::string s){
	if(s == "int"){
		type_n = T_INT;
	}else if((s == "unsigned int") | (s == "unsigned")){
		type_n = T_UNSIGNED;
	}else if(s == "char"){
		type_n = T_CHAR;
	}else if(s == "float"){
		type_n = T_FLOAT;
	}else if(s == "double"){
		type_n = T_DOUBLE;
	}else if(s == "enum"){
		type_n = T_ENUM;
	}else if(s == "struct"){
		type_n = T_STRUCT;
	}
}
int Type::returnSize(){
	switch(type_n){
				case T_INT:
					return 4;
					break;
				case T_DOUBLE:
					return 8;
					break;
				case T_FLOAT:
					return 4;
					break;
				case T_CHAR:
					return 4;
					break;
				case T_UNSIGNED:
					return 4;
					break;
				case T_SIGNED:
					return 4;
					break;
				case T_ENUM:
					break;
				case T_AUTO:
					break;
				case T_STRUCT:
					break;
			}
}