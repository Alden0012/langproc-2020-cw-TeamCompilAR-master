CC = g++  
CPPFLAGS += -std=c++17 


bin/c_compiler : bin/compiler src/wrapper.sh
	cp src/wrapper.sh bin/c_compiler
	chmod u+x bin/c_compiler

bin/compiler : version2/src/lex.yy.c version2/src/c_parser.tab.c
	mkdir -p bin
	g++ -std=c++17 -g version2/src/c_compiler.cpp version2/src/c_parser.tab.c version2/src/lex.yy.c version2/include/AST/Declarations/ast_declarationList.cpp version2/include/AST/Declarations/ast_declaratorList.cpp version2/include/AST/Expressions/Binary/ast_AdditiveOp.cpp version2/include/AST/Expressions/Binary/ast_BitwiseOp.cpp version2/include/AST/Expressions/Binary/ast_LogicalOp.cpp version2/include/AST/Expressions/Binary/ast_MultiplicativeOp.cpp version2/include/AST/Expressions/Binary/ast_RelationalOp.cpp version2/include/AST/Expressions/Binary/ast_ShiftOp.cpp version2/include/AST/Expressions/Constants/ast_intConst.cpp version2/include/AST/Expressions/Unary/ast_decOp.cpp version2/include/AST/Expressions/Unary/ast_incOp.cpp version2/include/AST/Expressions/Unary/ast_UnaryOp.cpp version2/include/AST/Expressions/ast_arrayIndex.cpp version2/include/AST/Expressions/ast_variable.cpp version2/include/AST/Functions/ast_functiondef.cpp version2/include/AST/Functions/ast_functionDecl.cpp version2/include/AST/Scope/ast_globalscope.cpp version2/include/AST/Scope/ast_scope.cpp version2/include/AST/ast_declaration.cpp version2/include/AST/ast_MakeLabel.cpp version2/include/AST/ast_root.cpp version2/include/AST/ast_type.cpp version2/include/AST/Expressions/ast_AssignmentExpr.cpp version2/include/AST/Expressions/ast_TernaryOp.cpp version2/include/AST/Statements/ast_ExprStatement.cpp version2/include/AST/Statements/ast_IfElseStatement.cpp version2/include/AST/Statements/ast_ReturnStatement.cpp version2/include/AST/Statements/ast_WhileStatement.cpp version2/include/AST/Statements/ast_CompoundStatement.cpp version2/include/AST/Statements/ast_ForStatement.cpp version2/include/AST/Expressions/Unary/ast_SizeOf.cpp version2/include/AST/Statements/ast_FunctionCall.cpp version2/include/AST/Statements/ast_ContinueStatement.cpp version2/include/AST/Statements/ast_BreakStatement.cpp version2/include/AST/Statements/ast_SwitchStatement.cpp version2/include/AST/Statements/ast_CaseStatement.cpp version2/include/AST/Expressions/Constants/ast_floatConst.cpp version2/include/AST/ast_PostProc.cpp version2/include/AST/Expressions/Constants/ast_charConst.cpp version2/include/AST/Expressions/Constants/ast_stringConst.cpp -o bin/compiler

version2/src/lex.yy.c : version2/src/c_lexer.flex
	flex -o version2/src/lex.yy.c version2/src/c_lexer.flex

version2/src/c_parser.tab.c : version2/src/c_parser.y
	bison -d version2/src/c_parser.y  -o version2/src/c_parser.tab.c -Wno-other -Wconflicts-sr
clean : 	
	rm -f src/*.o
	rm -f bin/*
