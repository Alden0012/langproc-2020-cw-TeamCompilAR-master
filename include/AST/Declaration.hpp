// Declaration Statements
#ifndef DECLARATION_HPP
#define DECLARATION_HPP
#include "Type.hpp"
#include "Expr.hpp"
#include "Node.hpp"
#include "IR_List.hpp"
//class Expr;
class Declaration : public Node{
public:
	std::string Variable_Identifier;
	Type *type;
	Expr *value;
	bool isGlobal;
	Declaration(std::string id,Type *var,Expr *init_val, bool isG) : Variable_Identifier(id), type(var), value(init_val), isGlobal(isG){}
	void ProduceIR(IR_List *IR, std::vector<std::pair<Declaration *,int> > Stack);
	int returnSize(){return (value ? type.returnSize() : 0);}
	int evaluateValue(){value->evaluateValue();}
};

#endif