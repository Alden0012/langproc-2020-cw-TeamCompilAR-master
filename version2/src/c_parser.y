%code requires{
  int yylex(void);
  void yyerror(const char *);
  #include <string>
  #include <iostream>
  #include <vector>
  #include "../include/ast_header.hpp"
  extern Root *Prog_Root;
}
%union{
	std::string *s;
	char c;
	float f;
	NodePtr ast_node;
	std::vector<Declaration *> *DeclList;
	std::vector<Expression *> *ExprList;
	std::vector<Statement *> *StatementList; 
	int n;

}
%token IDENTIFIER CONSTANT STRING_LITERAL SIZEOF FCONSTANT CCONSTANT
%token PTR_OP INC_OP DEC_OP LEFT_OP RIGHT_OP LE_OP GE_OP EQ_OP NE_OP
%token AND_OP OR_OP MUL_ASSIGN DIV_ASSIGN MOD_ASSIGN ADD_ASSIGN
%token SUB_ASSIGN LEFT_ASSIGN RIGHT_ASSIGN AND_ASSIGN
%token XOR_ASSIGN OR_ASSIGN TYPE_NAME

%token TYPEDEF EXTERN STATIC AUTO REGISTER
%token CHAR SHORT INT LONG SIGNED UNSIGNED FLOAT DOUBLE CONST VOLATILE VOID
%token STRUCT UNION ENUM ELLIPSIS

%token CASE DEFAULT IF ELSE SWITCH WHILE DO FOR GOTO CONTINUE BREAK RETURN


%type <ast_node> AstRoot translation_unit external_declaration function_definition
%type <ast_node> declarator direct_declarator parameter_list parameter_type_list parameter_declaration declaration
%type <ast_node> type_specifier declaration_specifiers compound_statement init_declarator primary_expression  postfix_expression
%type <ast_node> initializer assignment_expression expression unary_expression cast_expression unary_operators
%type <ast_node> multiplicative_expression additive_expression shift_expression relational_expression equality_expression and_expression exclusive_or_expression inclusive_or_expression
%type <ast_node> logical_and_expression logical_or_expression conditional_expression 
%type <ast_node> statement expression_statement  jump_statement selection_statement iteration_statement labeled_statement
%type <DeclList> init_declarator_list declaration_list
%type <ExprList> argument_expression_list initializer_list
%type <StatementList> statement_list
%type <c> assignment_operator CCONSTANT
%type <s> IDENTIFIER STRING_LITERAL
%type <n> CONSTANT
%type <f> FCONSTANT

%start AstRoot
%%

primary_expression
	: IDENTIFIER {$$ = new Variable(*$1);}
	| CONSTANT {$$ = new IntConst($1);}
	| CCONSTANT {$$ = new CharConst($1);}
	| FCONSTANT {$$ = new FloatConst($1);}
	| STRING_LITERAL {$$ = new StringConst(*$1);}
	| '(' expression ')' {$$ = $2;}
	;
postfix_expression
	: primary_expression 
	| IDENTIFIER '[' expression ']' {$$ = new ArrayIndex();dynamic_cast<ArrayIndex *>$$->name = *$1;dynamic_cast<ArrayIndex *>$$->index = dynamic_cast<Expression *>$3;}
	| IDENTIFIER '(' ')' {$$ = new FunctionCall(*$1);}
	| IDENTIFIER '(' argument_expression_list ')' {$$ = new FunctionCall(*$1,dynamic_cast<ExprListPtr> $3);}
	| postfix_expression '.' IDENTIFIER
	| postfix_expression PTR_OP IDENTIFIER
	| IDENTIFIER INC_OP {$$ = new IncOp(*$1);}
	| IDENTIFIER DEC_OP {$$ = new DecOp(*$1);}
	;

argument_expression_list
	: assignment_expression {$$ = new std::vector<Expression *>(); $$->push_back(dynamic_cast<Expression *>$1);}
	| argument_expression_list ',' assignment_expression {$$->push_back(dynamic_cast<Expression *>$3);}
	;

unary_expression
	: postfix_expression
	| INC_OP IDENTIFIER {$$ = new IncOp(*$2);}
	| DEC_OP IDENTIFIER {$$ = new DecOp(*$2);}
	| unary_operators  {$$ = $1;}
	| SIZEOF '(' IDENTIFIER ')' {$$ = new SizeOf(*$3);}
	| SIZEOF '(' IDENTIFIER '[' expression ']' ')' {$$ = new SizeOf(*$3);dynamic_cast<SizeOf *>$$->Index = 1;}
	| SIZEOF '(' type_specifier ')' {$$ = new SizeOf(dynamic_cast<Type *>$3);}
	| SIZEOF '(' type_specifier '[' expression ']' ')' {$$ = new SizeOf(dynamic_cast<Type *>$3); dynamic_cast<SizeOf *>$$->elements = dynamic_cast<Expression *>$5;}
	;

unary_operators
	: '&' cast_expression {$$ = new UnaryOp(dynamic_cast<Expression *>$2,"&");} //NOT IMPLEMENTED YET...
	| '*' cast_expression {$$ = new UnaryOp(dynamic_cast<Expression *>$2,"*");} //NOT IMPLEMENTED YET...
	| '+' cast_expression {$$ = new UnaryOp(dynamic_cast<Expression *>$2,"+");}
	| '-' cast_expression {$$ = new UnaryOp(dynamic_cast<Expression *>$2,"-");}
	| '~' cast_expression {$$ = new UnaryOp(dynamic_cast<Expression *>$2,"~");}
	| '!' cast_expression {$$ = new UnaryOp(dynamic_cast<Expression *>$2,"!");}
	;

cast_expression
	: unary_expression 
	| '(' type_name ')' cast_expression {$$ = $4;}
	;

multiplicative_expression
	: cast_expression 
	| multiplicative_expression '*' cast_expression {$$ = new MultiplicativeOp(dynamic_cast<Expression *>$1,dynamic_cast<Expression *>$3,"*");}
	| multiplicative_expression '/' cast_expression {$$ = new MultiplicativeOp(dynamic_cast<Expression *>$1,dynamic_cast<Expression *>$3,"/");}
	| multiplicative_expression '%' cast_expression {$$ = new MultiplicativeOp(dynamic_cast<Expression *>$1,dynamic_cast<Expression *>$3,"%");}
	;

additive_expression
	: multiplicative_expression
	| additive_expression '+' multiplicative_expression {$$ = new AdditiveOp(dynamic_cast<Expression *>$1,dynamic_cast<Expression *>$3,"+");}
	| additive_expression '-' multiplicative_expression {$$ = new AdditiveOp(dynamic_cast<Expression *>$1,dynamic_cast<Expression *>$3,"-");}
	;

shift_expression
	: additive_expression
	| shift_expression LEFT_OP additive_expression {$$ = new ShiftOp(dynamic_cast<Expression *>$1,dynamic_cast<Expression *>$3,"<<");}
	| shift_expression RIGHT_OP additive_expression {$$ = new ShiftOp(dynamic_cast<Expression *>$1,dynamic_cast<Expression *>$3,">>");}
	;

relational_expression
	: shift_expression
	| relational_expression '<' shift_expression {$$ = new RelationalOp(dynamic_cast<Expression *>$1,dynamic_cast<Expression *>$3,"<");}
	| relational_expression '>' shift_expression {$$ = new RelationalOp(dynamic_cast<Expression *>$1,dynamic_cast<Expression *>$3,">");}
	| relational_expression LE_OP shift_expression {$$ = new RelationalOp(dynamic_cast<Expression *>$1,dynamic_cast<Expression *>$3,"<=");}
	| relational_expression GE_OP shift_expression {$$ = new RelationalOp(dynamic_cast<Expression *>$1,dynamic_cast<Expression *>$3,">=");}
	;

equality_expression
	: relational_expression
	| equality_expression EQ_OP relational_expression {$$ = new RelationalOp(dynamic_cast<Expression *>$1,dynamic_cast<Expression *>$3,"==");}
	| equality_expression NE_OP relational_expression {$$ = new RelationalOp(dynamic_cast<Expression *>$1,dynamic_cast<Expression *>$3,"!=");}
	;

and_expression
	: equality_expression
	| and_expression '&' equality_expression {$$ = new BitwiseOp(dynamic_cast<Expression *>$1,dynamic_cast<Expression *>$3,"&");}
	;

exclusive_or_expression
	: and_expression
	| exclusive_or_expression '^' and_expression {$$ = new BitwiseOp(dynamic_cast<Expression *>$1,dynamic_cast<Expression *>$3,"^");}
	;

inclusive_or_expression
	: exclusive_or_expression
	| inclusive_or_expression '|' exclusive_or_expression {$$ = new BitwiseOp(dynamic_cast<Expression *>$1,dynamic_cast<Expression *>$3,"|");}
	;

logical_and_expression
	: inclusive_or_expression
	| logical_and_expression AND_OP inclusive_or_expression {$$ = new LogicalOp(dynamic_cast<Expression *>$1,dynamic_cast<Expression *>$3,"&&");}
	;

logical_or_expression
	: logical_and_expression
	| logical_or_expression OR_OP logical_and_expression {$$ = new LogicalOp(dynamic_cast<Expression *>$1,dynamic_cast<Expression *>$3,"||");}
	;

conditional_expression
	: logical_or_expression
	| logical_or_expression '?' expression ':' conditional_expression {$$ = new TernaryOp(dynamic_cast<Expression *>$1,dynamic_cast<Expression *>$3,dynamic_cast<Expression *>$5);}
	;

assignment_expression
	: conditional_expression
	| IDENTIFIER assignment_operator assignment_expression {$$ = new AssignmentExpr(*$1,$2,dynamic_cast<Expression *> $3);}
	| '*' primary_expression assignment_operator assignment_expression {$$ = new AssignmentExpr(dynamic_cast<Expression *>$2,$3,dynamic_cast<Expression *> $4);}
	| IDENTIFIER '[' expression ']' assignment_operator assignment_expression {$$ = new AssignmentExpr(*$1,$5,dynamic_cast<Expression *> $6,dynamic_cast<Expression *>$3);}
	| unary_expression assignment_operator assignment_expression 
	;

assignment_operator
	: '=' {$$ = '=';}
	| MUL_ASSIGN {$$ = '*';}
	| DIV_ASSIGN {$$ = '/';}
	| MOD_ASSIGN {$$ = '%';}
	| ADD_ASSIGN {$$ = '+';}
	| SUB_ASSIGN {$$ = '-';}
	| LEFT_ASSIGN {$$ = '<';}
	| RIGHT_ASSIGN {$$ = '>';}
	| AND_ASSIGN {$$ = '&';}
	| XOR_ASSIGN {$$ = '^';}
	| OR_ASSIGN {$$ = '|';}
	;

expression
	: assignment_expression
	;

constant_expression
	: conditional_expression
	;

declaration
	: declaration_specifiers ';'
	| declaration_specifiers IDENTIFIER ';' {$$ = new Declaration(*$2);dynamic_cast<Declaration *>$$->type = dynamic_cast<Type *>$1;}
	| declaration_specifiers '*' IDENTIFIER ';' {$$ = new Declaration(*$3);dynamic_cast<Declaration *>$$->type = dynamic_cast<Type *>$1;dynamic_cast<Declaration *>$$->type->pointer = 1;}
	| declaration_specifiers IDENTIFIER '[' CONSTANT ']' ';' {$$ = new Declaration(*$2);dynamic_cast<Declaration *>$$->type = dynamic_cast<Type *>$1;dynamic_cast<Declaration *>$$->type->array = 1;dynamic_cast<Declaration *>$$->type->arrSize = $4;dynamic_cast<Declaration *>$$->ArraySize = $4;}
	| declaration_specifiers '*' IDENTIFIER '=' initializer ';' {$$ = new Declaration(*$3);dynamic_cast<Declaration *>$$->type = dynamic_cast<Type *>$1;dynamic_cast<Declaration *>$$->type->pointer = 1;dynamic_cast<Declaration *>$$->initializer = dynamic_cast<Expression *>$5;}
	| declaration_specifiers IDENTIFIER '=' initializer ';' {$$ = new Declaration(*$2);dynamic_cast<Declaration *>$$->type = dynamic_cast<Type *>$1;dynamic_cast<Declaration *>$$->initializer = dynamic_cast<Expression *>$4;} 
	| declaration_specifiers IDENTIFIER '[' CONSTANT ']' '=' '{' initializer_list '}' ';' {$$ = new Declaration(*$2);dynamic_cast<Declaration *>$$->type = dynamic_cast<Type *>$1;dynamic_cast<Declaration *>$$->type->array = 1;dynamic_cast<Declaration *>$$->type->arrSize = $4;dynamic_cast<Declaration *>$$->ArraySize = $4;dynamic_cast<Declaration *>$$->initList = dynamic_cast<ExprListPtr>$8;}
	| declaration_specifiers init_declarator_list ';' {}
	;

declaration_specifiers
	: storage_class_specifier
	| storage_class_specifier declaration_specifiers
	| type_specifier 
	| type_specifier declaration_specifiers
	| type_qualifier
	| type_qualifier declaration_specifiers
	;

init_declarator_list
	: init_declarator {$$ = new std::vector<Declaration *>; dynamic_cast<DeclListPtr>$$->push_back(dynamic_cast<Declaration *>$1);}
	| init_declarator_list ',' init_declarator {dynamic_cast<DeclListPtr>$$->push_back(dynamic_cast<Declaration *>$3);}
	;

init_declarator
	: declarator {$$ = $1;}
	| declarator '=' initializer 
	;

storage_class_specifier
	: TYPEDEF
	| EXTERN
	| STATIC
	| AUTO
	| REGISTER
	;

type_specifier
	: VOID {$$ = new Type("void");}
	| CHAR {$$ = new Type("char");}
	| SHORT 
	| INT {$$ = new Type("int");}
	| FLOAT {$$ = new Type("float");}
	| DOUBLE {$$ = new Type("double");}
	| SIGNED {$$ = new Type("signed");}
	| UNSIGNED {$$ = new Type("unsigned");}
	| struct_or_union_specifier
	| enum_specifier
	| TYPE_NAME
	;

struct_or_union_specifier
	: struct_or_union IDENTIFIER '{' struct_declaration_list '}'
	| struct_or_union '{' struct_declaration_list '}'
	| struct_or_union IDENTIFIER
	;

struct_or_union
	: STRUCT
	| UNION
	;

struct_declaration_list
	: struct_declaration
	| struct_declaration_list struct_declaration
	;

struct_declaration
	: specifier_qualifier_list struct_declarator_list ';'
	;

specifier_qualifier_list
	: type_specifier specifier_qualifier_list
	| type_specifier
	| type_qualifier specifier_qualifier_list
	| type_qualifier
	;

struct_declarator_list
	: struct_declarator
	| struct_declarator_list ',' struct_declarator
	;

struct_declarator
	: declarator
	| ':' constant_expression
	| declarator ':' constant_expression
	;

enum_specifier
	: ENUM '{' enumerator_list '}'
	| ENUM IDENTIFIER '{' enumerator_list '}'
	| ENUM IDENTIFIER
	;

enumerator_list
	: enumerator
	| enumerator_list ',' enumerator
	;

enumerator
	: IDENTIFIER
	| IDENTIFIER '=' constant_expression
	;

type_qualifier
	: CONST
	| VOLATILE
	;

declarator
	: pointer direct_declarator
	| direct_declarator {{$$ = $1;}}
	;

direct_declarator
	: IDENTIFIER {$$ = new Declaration(*($1));}
	| '(' declarator ')' {$$ = $2;}
	| direct_declarator '[' constant_expression ']'
	| direct_declarator '[' ']'
	| direct_declarator '(' parameter_type_list ')' {$$ = new FunctionDecl(dynamic_cast<Declaration *>$1);dynamic_cast<FunctionDecl *>$$->ParamScope = (dynamic_cast<Scope *>$3);}
	| direct_declarator '(' identifier_list ')' {$$ = dynamic_cast<FunctionDecl *>$1;}
	| direct_declarator '(' ')' {$$ = new FunctionDecl(dynamic_cast<Declaration *>$1);}
	;

pointer
	: '*'
	| '*' type_qualifier_list
	| '*' pointer
	| '*' type_qualifier_list pointer
	;

type_qualifier_list
	: type_qualifier
	| type_qualifier_list type_qualifier
	;


parameter_type_list
	: parameter_list {$$ = $1;}
	| parameter_list ',' ELLIPSIS
	;

parameter_list
	: parameter_declaration {$$ = new Scope(); dynamic_cast<Scope *>$$->MergeDecl(dynamic_cast<Declaration *>$1);}
	| parameter_list ',' parameter_declaration {dynamic_cast<Scope *>$$->MergeDecl(dynamic_cast<Declaration *>$3);}
	;

parameter_declaration
	: declaration_specifiers IDENTIFIER {$$ = new Declaration(*($2));dynamic_cast<Declaration *>$$->type = dynamic_cast<Type *>$1;}
	| declaration_specifiers '*' IDENTIFIER {$$ = new Declaration(*($3));dynamic_cast<Declaration *>$$->type = dynamic_cast<Type *>$1;dynamic_cast<Declaration *>$$->type->pointer = 1;}
	| declaration_specifiers abstract_declarator
	| declaration_specifiers
	;

identifier_list
	: IDENTIFIER
	| identifier_list ',' IDENTIFIER
	;

type_name
	: specifier_qualifier_list
	| specifier_qualifier_list abstract_declarator
	;

abstract_declarator
	: pointer
	| direct_abstract_declarator
	| pointer direct_abstract_declarator
	;

direct_abstract_declarator
	: '(' abstract_declarator ')'
	| '[' ']'
	| '[' constant_expression ']'
	| direct_abstract_declarator '[' ']'
	| direct_abstract_declarator '[' constant_expression ']'
	| '(' ')'
	| '(' parameter_type_list ')'
	| direct_abstract_declarator '(' ')'
	| direct_abstract_declarator '(' parameter_type_list ')'
	;

initializer
	: assignment_expression
	| '{' initializer_list '}'
	| '{' initializer_list ',' '}'
	;

initializer_list
	: expression {$$ = new std::vector<Expression *>; dynamic_cast<ExprListPtr>$$->push_back(dynamic_cast<Expression *>$1);}
	| initializer_list ',' expression {dynamic_cast<ExprListPtr>$$->push_back(dynamic_cast<Expression *>$3);}
	;

statement
	: labeled_statement
	| compound_statement {$$ = new CompoundStatement(dynamic_cast<Scope *> $1);}
	| expression_statement 
	| selection_statement
	| iteration_statement
	| jump_statement
	;

labeled_statement
	: IDENTIFIER ':' statement
	| CASE expression ':' {$$ = new CaseStatement(dynamic_cast<Expression *> $2);}
	| DEFAULT ':' {$$ = new CaseStatement();}
	;

compound_statement
	: '{' '}' {$$ =  new Scope();}
	| '{' statement_list '}' {$$ = new Scope();dynamic_cast<Scope *>$$->Statements = dynamic_cast<StatementListPtr>$2;}
	| '{' declaration_list '}' {$$ = new Scope();dynamic_cast<Scope *>$$->Declarations = dynamic_cast<DeclListPtr>$2;}
	| '{' declaration_list statement_list '}' {$$ = new Scope();dynamic_cast<Scope *>$$->Declarations = dynamic_cast<DeclListPtr>$2;dynamic_cast<Scope *>$$->Statements = dynamic_cast<StatementListPtr>$3;}
	;

declaration_list
	: declaration {$$ = new std::vector<Declaration *>; dynamic_cast<DeclListPtr>$$->push_back(dynamic_cast<Declaration *>$1);}
	| declaration_list declaration {dynamic_cast<DeclListPtr>$$->push_back(dynamic_cast<Declaration *>$2);}
	;

statement_list
	: statement {$$ = new std::vector<Statement *>; dynamic_cast<StatementListPtr>$$->push_back(dynamic_cast<Statement *>$1);}
	| statement_list statement {dynamic_cast<StatementListPtr>$$->push_back(dynamic_cast<Statement *>$2);}
	;

expression_statement
	: ';'
	| expression ';' {$$ = new ExprStatement(dynamic_cast<Expression *>$1);}
	;

selection_statement
	: IF '(' expression ')' compound_statement {$$ = new IfElseStatement(dynamic_cast<Expression *>$3, dynamic_cast<Scope *>$5);}
	| IF '(' expression ')' compound_statement ELSE compound_statement {$$ = new IfElseStatement(dynamic_cast<Expression *>$3, dynamic_cast<Scope *>$5,dynamic_cast<Scope *>$7);}
	| SWITCH '(' expression ')' compound_statement {$$ = new SwitchStatement(dynamic_cast<Expression *>$3,dynamic_cast<Scope *>$5); }
	;

iteration_statement
	: WHILE '(' expression ')' compound_statement {$$ = new WhileStatement(dynamic_cast<Expression *>$3,dynamic_cast<Scope *>$5);}
	| DO statement WHILE '(' expression ')' ';'
	| FOR '(' declaration ';' expression_statement ')' compound_statement {$$ = new ForStatement(dynamic_cast<Declaration *> $3, dynamic_cast<Statement *> $5, dynamic_cast<Scope *> $7);}
	| FOR '(' expression_statement expression_statement ')' compound_statement {$$ = new ForStatement(dynamic_cast<Statement *> $3, dynamic_cast<Statement *> $4, dynamic_cast<Scope *> $6);}
	| FOR '(' expression_statement expression_statement expression ')' compound_statement {$$ = new ForStatement(dynamic_cast<Statement *> $3, dynamic_cast<Statement *> $4,dynamic_cast<Expression *> $5, dynamic_cast<Scope *> $7);}
	| FOR '(' declaration  expression_statement expression ')' compound_statement {$$ = new ForStatement(dynamic_cast<Declaration *> $3, dynamic_cast<Statement *> $4, dynamic_cast<Expression *> $5,dynamic_cast<Scope *> $7);}
	;

jump_statement
	: GOTO IDENTIFIER ';'
	| CONTINUE ';' {$$ = new ContinueStatement();}
	| BREAK ';' {$$ = new BreakStatement();}
	| RETURN ';'
	| RETURN expression ';' {$$ = new ReturnStatement(dynamic_cast<Expression *>$2);}
	;

AstRoot : translation_unit {$$ = new Root(dynamic_cast<GlobalScope *>$1); Prog_Root = dynamic_cast<Root *>$$;}

translation_unit
	: external_declaration {$$ = new GlobalScope(); (dynamic_cast<GlobalScope *>$$)->mergeNode($1); }
	| translation_unit external_declaration {(dynamic_cast<GlobalScope *>$$)->mergeNode($2);}
	;

external_declaration
	: function_definition {$$ = $1;}
	| declaration {$$ = $1;}
	;

function_definition
	: declaration_specifiers declarator declaration_list compound_statement 
	| declaration_specifiers declarator compound_statement { $$ = new Function(dynamic_cast<FunctionDecl *>$2,dynamic_cast<Type *>$1,dynamic_cast<Scope *>$3);}
	| declaration_specifiers '*' declarator compound_statement {$$ = new Function(dynamic_cast<FunctionDecl *>$3,dynamic_cast<Type *>$1,dynamic_cast<Scope *>$4);dynamic_cast<Function *>$$->retPointer = 1;}
	| declarator declaration_list compound_statement
	| declarator compound_statement
	;

%%

Root *Prog_Root;
Root *parseAST(){
	Prog_Root = 0;
	yyparse();
	return Prog_Root;
}