%code requires{
	#include "../include/ast.hpp"
	#include <vector>
	extern const Prog_Root *pRoot;

	int yylex(void);
	void yyerror(const char *);
}
%union{
	char* s;
	char c;
	int i;
	float f;
	double d;
	Node *n;
	std::vector<Node *> nodeVec;
}
%token T_VOID T_INT T_DOUBLE T_FLOAT T_CHAR T_UNSIGNED T_SIGNED T_ENUM T_AUTO T_STRUCT
%token T_IF T_ELSE T_DO T_WHILE T_FOR T_SWITCH T_CASE T_BREAK T_CONTINUE T_DEFAULT
%token T_RETURN T_SIZEOF
%token T_EQUAL T_EQUAL_ADD T_EQUAL_SUB T_EQUAL_MULT T_EQUAL_DIV T_EQUAL_MOD T_EQUAL_AND T_EQUAL_OR T_EQUAL_XOR T_EQUAL_LSHIFT T_EQUALRSHIFT
%token T_PLUS T_MINUS T_MULT T_DIV T_MOD T_LSHIFT T_RSHIFT T_INC T_DEC T_NOT T_INV T_AND T_OR T_XOR
%token T_LOGICAL_EQ T_LOGICAL_AND T_LOGICAL_OR T_LOGICAL_NEQ T_LOGICAL_LESS T_LOGICAL_LESSEQ T_LOGICAL_GREATER T_LOGICAL_GREATEREQ
%token T_DOT T_ARROW T_COMMA T_SEMICOLON T_COLON T_QUESTION T_LCURLYBRACKET T_RCURLYBRACKET T_LSQUAREBRACKET T_RSQUAREBRACKET T_LBRACKET T_RBRACKET
%token T_OCT_INT T_DECIMAL_INT T_HEX_INT 
%token T_FLOAT_LITERAL
%token T_DOUBLE_LITERAL
%token T_STRING_LITERAL T_VARIABLE_IDENTIFIER
%type <s> T_VARIABLE_IDENTIFIER
%type <i> T_OCT_INT T_DECIMAL_INT T_HEX_INT
%type <n> Prog_Root MainDeclaration Function_Definition Statement 
%type <nodeVec> Statement_List
%type <n> Declaration_Statement Assignment_Statement Conditional_Statement While_Statement
%type <n> L_VALUE Expression
%type <n> Unary_Expression
%type <n> Types  Factor
%type <nodeVec> Params
%type <s> BINARY_OPERATOR PRE_UNARY_OPERATOR POST_UNARY_OPERATOR





%start Prog_Root
%%

Prog_Root : MainDeclaration {$$ = new Prog_Root(); pRoot = $$; $$->AddMainDeclaration($1);}
		  | Prog_Root MainDeclaration  {$$->AddMainDeclaration($2);}

MainDeclaration : Types T_VARIABLE_IDENTIFIER T_SEMICOLON {$$ = new Declaration($2,$1,nullptr,true);}
				| Types T_VARIABLE_IDENTIFIER T_EQUAL Expression T_SEMICOLON {$$ =  new Declaration($2,$1,$4,true);}
				| Types T_VARIABLE_IDENTIFIER T_LBRACKET Params T_RBRACKET T_SEMICOLON {$$ = new Function($2,$1,$4,null);}
				| Types T_VARIABLE_IDENTIFIER '(' ')' T_SEMICOLON {$$ = new Function($2,$1,null,null);}
				| Function_Definition {$$ = $1;}

Function_Definition : Types T_VARIABLE_IDENTIFIER T_LBRACKET T_RBRACKET T_LCURLYBRACKET Statement_List T_RCURLYBRACKET {$$ = new Function($2,$1,null,$6);}
					| Types T_VARIABLE_IDENTIFIER T_RBRACKET Params T_LBRACKET T_LCURLYBRACKET Statement_List T_RCURLYBRACKET {$$ = new Function($2,$1,$4,$7);}

Params : Declaration_Statement {std::vector<Declaration *> temp; $$ = temp;$$.push_back($1);}
	   | Params Declaration_Statement {$$.push_back($2);}

Statement_List : Statement {std::vector<Statement *> temp;  $$ = temp; $$.push_back($1);}
			   | Statement_List Statement {$$.push_back($2);}

Statement : Assignment_Statement {$$ = $1;}
		  | Declaration_Statement {$$ = $1;}
		  | Conditional_Statement {$$ = $1;} 


Declaration_Statement :  Types T_VARIABLE_IDENTIFIER T_EQUAL Expression T_SEMICOLON {Declaration* temp = new Declaration($2,$1,$4,false); $$ = new Declaration_Statement(temp);}
					  |  Types T_VARIABLE_IDENTIFIER T_SEMICOLON {Declaration* temp = new Declaration($2,$1,nullptr,false); $$ = new Declaration_Statement(temp);}


Assignment_Statement : L_VALUE T_EQUAL Expression {$$ = new Assignment_Statement($1,$3);}

L_VALUE : T_VARIABLE_IDENTIFIER {}
		| T_VARIABLE_IDENTIFIER T_RSQUAREBRACKET T_LSQUAREBRACKET {}
		| T_VARIABLE_IDENTIFIER T_RSQUAREBRACKET Expression T_LSQUAREBRACKET {}




Conditional_Statement : T_IF T_LBRACKET Expression T_RBRACKET Statement T_SEMICOLON{std::vector<Statement *> temp1;temp1.push_back($5);
																		$$ = new Conditional_Statement($3,temp1,null);}

					  | T_IF T_LBRACKET Expression T_RBRACKET Statement T_ELSE Statement T_SEMICOLON { std::vector<Statement *> temp1;
					   																				   temp1.push_back($5);
					    																			   std::vector<Statement *> temp2;
					    																			   temp2.push_back($7); 
					    																			   $$ = new Conditional_Statement($3,temp1,temp2); }
					  | T_IF T_LBRACKET Expression T_RBRACKET T_LCURLYBRACKET Statement_List T_RCURLYBRACKET {$$ = new Conditional_Statement($3,$6,null);}
					  | T_IF T_LBRACKET Expression T_RBRACKET T_LCURLYBRACKET Statement_List T_RCURLYBRACKET T_ELSE T_LCURLYBRACKET Statement_List T_RCURLYBRACKET {$$ = new Conditional_Statement($3,$6,$10);}


While_Statement : T_WHILE T_LBRACKET Expression T_RBRACKET T_LCURLYBRACKET Statement_List T_RCURLYBRACKET T_SEMICOLON {}
				| T_WHILE T_LBRACKET Expression T_RBRACKET Statement T_SEMICOLON{}




Expression : T_VARIABLE_IDENTIFIER {$$ =  new Variable($1);}
		   | T_VARIABLE_IDENTIFIER BINARY_OPERATOR Expression {$$ = new Binary_Expr($1,$3,$2);}
		   | Unary_Expression {$$ = $1;}

BINARY_OPERATOR : T_PLUS {$$ = "+";}
				| T_MINUS {$$ = "-";}
				| T_MULT {$$ = "*";}
				| T_DIV {$$ = "/";}


Unary_Expression : PRE_UNARY_OPERATOR T_VARIABLE_IDENTIFIER {$$ = new Unary_Expr($2,$1);}
		   		 | T_VARIABLE_IDENTIFIER POST_UNARY_OPERATOR {$$ = new Unary_Expr($1,$2);}

PRE_UNARY_OPERATOR : T_INC {$$ = "++";}
				   | T_DEC {$$ = "--";}
				   | T_AND {$$ = "&";}
				   | T_INV {$$ = "~";}
				   | T_XOR {$$ = "^";}
				   | T_NOT {$$ = "!";}
				   | T_MULT {$$ = "*";}

POST_UNARY_OPERATOR : T_INC {$$ = "++";}
				   	| T_DEC {$$ = "--";}
					   
				   	
Factor : T_DECIMAL_INT    {$$ = new Constant($1); }
       | Unary_Expression  {$$ = new Unary_Expression(*($1)); }
       | T_LBRACKET Expression T_RBRACKET { $$ = $2; }


Types : T_VOID {$$ = new Type("void"); }
			| T_INT {$$ = new Type("int");}
			| T_DOUBLE {$$ = new Type("double");}
			| T_FLOAT {$$ = new Type("float");}
			| T_CHAR {$$ = new Type("char");}
			| T_UNSIGNED {$$ = new Type("unsigned");} 
			| T_SIGNED {$$ = new Type("signed");}
			;
%%			
const Prog_Root *pRoot;


const Prog_Root *parseAST(){
	pRoot = 0;
	yyparse();
	return pRoot;
}



