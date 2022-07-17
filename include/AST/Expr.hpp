#ifndef EXPR_HPP
#define EXPR_HPP
#include "Node.hpp"
#include "Declaration.hpp"
#include "IR_List.hpp"
class Expr : public Node {
public:
	virtual void ProduceIR(IR_List *IR,std::vector<std::pair<Declaration *,int> > Stack,int regno);
	virtual int evaluateValue(); // used to evalute constants ONLY for global variable definition, fails for variables
	virtual int returnStackOffset(std::vector<std::pair<Declaration *,int> > Stack);
	Expr();
};

#endif