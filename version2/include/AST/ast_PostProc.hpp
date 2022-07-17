#ifndef AST_POSTPROC_HPP
#define AST_POSTPROC_HPP
#include <string>

void AddPostProc(std::string n,int32_t f);
void AddPostProc(std::string s,std::string literal);
void PostProcessing();
#endif