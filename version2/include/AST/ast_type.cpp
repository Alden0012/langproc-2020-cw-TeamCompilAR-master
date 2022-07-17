#include "ast_type.hpp"
Type::Type(std::string inputType){
    if(inputType == "void"){
        value_type = T_VOID;
        size = 0;
    }else if(inputType == "int"){
        value_type = T_INT;
        size = 4;
    }else if(inputType == "float"){
        value_type = T_FLOAT;
        size = 4;
    }else if(inputType == "double"){
        value_type = T_DOUBLE;
        size = 8;
    }else if(inputType == "char"){
        value_type = T_CHAR;
        size = 1;
    }else if(inputType == "unsigned"){
        value_type = T_UNSIGNED;
        size = 4;
    }else{
        value_type = T_SIGNED;
        size = 4;
    }
}