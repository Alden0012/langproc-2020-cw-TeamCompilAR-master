#ifndef VARIABLE_HPP
#define VARIABLE_HPP
#include "Declaration.hpp"
#include <vector>
#include <utility>
#include "IR_List.hpp"

class Variable : public Expr{
public:
	std::string Identifier;

	Variable(std::string s);
	int returnStackOffset(std::vector<std::pair<Declaration *,int> > Stack);
	void ProduceIR(IR_List *IR, std::vector<std::pair<Declaration *,int> > Stack, int regno);
};


#endif