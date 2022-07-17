// Top of the AST / Program
#ifndef PROG_ROOT_H
#define PROG_ROOT_H
#include <vector>
#include "Function.hpp"
#include "Declaration.hpp"
#include <utility>
#include "IR_List.hpp"
#include "Node.hpp"
class Prog_Root : public Node{ 
	std::vector<Function *> Functions;
	std::vector<Declaration *> Declarations; //Global Variables
	std::vector<std::pair<Declaration *,int> > Stack; // variable and stack offset
	public:
	Prog_Root();
	void ProduceIR(IR_List *IR);
	void AddMainDeclaration(Function *func);
	void AddMainDeclaration(Declaration *decl);
};

#endif