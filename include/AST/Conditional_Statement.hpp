#ifndef CONDITIONAL_STATEMENT_HPP
#define CONDITIONAL_STATEMENT_HPP
#include "Statement.hpp"
#include "Expr.hpp"
#include <vector>
#include <utility>
#include "IR_List.hpp"


class Conditional_Statement : public Statement {
	Expr* Condition;
	std::vector<Statement *> TrueBranch;
	std::vector<Statement *> FalseBranch;
public:	
	Conditional_Statement(Expr* a, std::vector<Statement *> b, std::vector<Statement *> c) : Condition(a), TrueBranch(b), FalseBranch(c){}
	void ProduceIR(IR_List *IR, std::vector<std::pair<Declaration *,int> > Stack);
	virtual int returnDeclarationSize();
};


#endif