#include "ast_MakeLabel.hpp"
#include <map>
#include <sstream>

std::map<std::string, int> LabelMap;
std::string MakeLabel(std::string str){
    if(LabelMap.count(str) == 0){
        LabelMap[str] = 1;
    }else{
        LabelMap[str]++;
    }
    std::stringstream ss;
    ss << str << "_" << LabelMap[str];
    return ss.str();
}