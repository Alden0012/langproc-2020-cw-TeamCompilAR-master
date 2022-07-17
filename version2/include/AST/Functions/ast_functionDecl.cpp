#include "ast_functionDecl.hpp"
#include <iostream>
void FunctionDecl::CopyParams(){
    if (ParamScope){
        std::vector<Declaration *> tempdecls = *(ParamScope->Declarations);
        for(int i = 0;i < tempdecls.size();i++){
            Params.push_back(tempdecls[i]);
        }
    }
}
int FunctionDecl::getParamSize(){
    int temp = 0;
    for(int i = 0;i < Params.size();i++){
        temp += Params[i]->returnDeclSize();
    }
    return temp;
}