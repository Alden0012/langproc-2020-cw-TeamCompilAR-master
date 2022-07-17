#ifndef ASSIGNMENT_STATEMENT_HPP
#define ASSIGNMENT_STATEMENT_HPP
#include "IR_List.hpp"
#include "Expr.hpp"
#include "Statement.hpp"
#include <vector>
#include <utility>


class Assignment_Statement : public Statement{
	Expr *lvalue;
	Expr *rvalue;
public:
	Assignment_Statement(Expr *lv, Expr *rv) : lvalue(lv), rvalue(rv){}
	void ProduceIR(IR_List *IR, std::vector<std::pair<Declaration *,int> > Stack);
	virtual int returnDeclarationSize(){return 0;}
};
#endif