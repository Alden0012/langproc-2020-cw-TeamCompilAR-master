%option noyywrap
%{
extern "C" int fileno(FILE *stream);
#include <string>
#include "c_parser.tab.h"
#include <stdio.h>	
#include <iostream>
#include <stdlib.h>
%}

T_DECIMAL_INT [-]?[0-9]+
T_HEX_INT 0[xX][0-9|a-f|A-F]+
T_OCT_INT 0[0-7]+
T_FLOAT_PWR [-]?[0-9]*[Ee][+-]?[0-9]+
T_FLOAT_DOT [-]?[0-9]+"."[0-9]+
T_FLOAT_DOT_PWR [-]?[0-9]+"."[0-9]+[Ee][+-]?[0-9]+ 
T_FLOAT_LITERAL ({T_FLOAT_PWR})|({T_FLOAT_DOT})|({T_FLOAT_DOT_PWR})(fF)
T_DOUBLE_LITERAL ({T_FLOAT_PWR})|({T_FLOAT_DOT})|({T_FLOAT_DOT_PWR})

T_VARIABLE_IDENTIFIER [a-z|A-Z][0-9|a-z|A-Z]* 

T_STRING_LITERAL \"(\\.|[^\\"])*\"

%%

"void" { return T_VOID; }
"int"  { return T_INT;  }
"double" {return T_DOUBLE; }
"float" {return T_FLOAT;}
"char" {return T_CHAR;}
"unsigned" {return T_UNSIGNED;}
"signed" {return T_SIGNED;}
"enum" {return T_ENUM;}
"auto" {return T_AUTO;}
"struct" {return T_STRUCT:}


"if" {return T_IF;}
"else" {return T_ELSE;}


"do" {return T_DO;}
"while" {return T_WHILE;}
"for" {return T_FOR;}
"switch" {return T_SWITCH;}
"case" {return T_CASE;}
"break" {return T_BREAK;}
"continue" {return T_CONTINUE;}
"default" {return T_DEFAULT;}


"return" {return T_RETURN;}
"sizeof" {return T_SIZEOF;}


"=" {return T_EQUAL;}
"+=" {return T_EQUAL_ADD;}
"-=" {return T_EQUAL_SUB;}
"*=" {return T_EQUAL_MULT;}
"/=" {return T_EQUAL_DIV;}
"%=" {return T_EQUAL_MOD;}
"&=" {return T_EQUAL_AND;}
"|=" {return T_EQUAL_OR;}
"^=" {return T_EQUAL_XOR;}
"<<=" {return T_EQUAL_LSHIFT;}
">>=" {return T_EQUAL_RSHIFT;}

"+" {return T_PLUS;}
"-" {return T_MINUS;}
"*" {return T_MULT;}
"/" {return T_DIV;}
"%" {return T_MOD;}
"<<" {return T_LSHIFT;}
">>" {return T_RSHIFT;}
"++" {return T_INC;}
"--" {return T_DEC;}
"!" {return T_NOT;}
"~" {return T_INV;}
"&" {return T_AND;}
"|" {return T_OR;}
"^" {return T_XOR;}

"->" {return T_ARROW;}
"==" {return T_LOGICAL_EQ;}
"&&" {return T_LOGICAL_AND;}
"||" {return T_LOGICAL_OR;}
"!=" {return T_LOGICAL_NEQ;}
"<" {return T_LOGICAL_LESS;}
"<=" {return T_LOGICAL_LESSEQ;}
">" {return T_LOGICAL_GREATER;}
">=" {return T_LOGICAL_GREATEREQ;}


"." {return T_DOT;}
"," {return T_COMMA;}
";" {return T_SEMICOLON;}
":" {return T_COLON;}
"?" {return T_QUESTION;}
"{" {return T_LCURLYBRACKET;}
"}" {return T_RCURLYBRACKET;}
"[" {return T_LSQUAREBRACKET;}
"]" {return T_RSQUAREBRACKET;}
"(" {return T_LBRACKET;}
")" {return T_RBRACKET;}

{T_OCT_INT} {
	std::stringstream ss;
	ss << std::oct << yytext;
	int x;
	ss >> x;
	yylval.i = (int) x;
	return T_OCT_INT;
}
{T_DECIMAL_INT} {
	yylval.i = std::stoi(yytext);
	return T_DECIMAL_INT;
}
{T_HEX_INT} {
	std::stringstream ss;
	ss << std::hex << yytext;
	int x;
	ss >> x;
	yylval.i = (int) x;
	return T_HEX_INT;
}

{T_FLOAT_LITERAL} {
	yylval.f = std::stof(yytext);
	return T_FLOAT_LITERAL;
}
{T_DOUBLE_LITERAL} {
	yylval.d = std::stod(yytext);
	return T_DOUBLE_LITERAL;
}
{T_STRING_LITERAL} {
	yylval.s = new std::string(yytext);
	return T_STRING_LITERAL;
}

{T_VARIABLE_IDENTIFIER} {
	return T_VARIABLE_IDENTIFIER;
}
[ \t\r\n]+ {;}
. { fprintf(stderr,"Parse error : %s\n", s); }
%%
void yyerror(char const *s)
{
	fprintf( stderr, "Parse error : %s\n", s);
	exit(1);
}