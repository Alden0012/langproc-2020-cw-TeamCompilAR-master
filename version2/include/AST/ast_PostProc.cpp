#include "ast_PostProc.hpp"
#include <map>
#include <iterator>
#include <iostream>
std::map<std::string, int32_t> FloatMap;
std::map<std::string, std::string> StringMap;
void AddPostProc(std::string n,int32_t f){
    FloatMap[n] = f;
}
void AddPostProc(std::string s,std::string literal){
    StringMap[s] = literal;
}
void PostProcessing(){
    std::map<std::string, int32_t>::iterator it;
    for (it = FloatMap.begin(); it != FloatMap.end(); it++)
    {
    std::cout << it->first << ":" << std::endl;
    std::cout << "        " << ".word " << it->second << std::endl;
    }
    std::map<std::string, std::string>::iterator it2;
    for(it2 = StringMap.begin();it2 != StringMap.end();it2++){
    std::cout << it2->first << ":" << std::endl;
    std::cout << "        " << ".ascii " << "\"" << it2->second << "\\000\"" << std::endl;   
    }
}