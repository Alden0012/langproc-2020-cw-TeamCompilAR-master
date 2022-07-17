// Functions
#ifndef FUNCTION_HPP
#define FUNCTION_HPP
#include <string>
#include <utility>
#include <vector>
#include <iostream>
#include "Declaration.hpp"
#include "Statement.hpp"
#include "IR_List.hpp"
#include "Node.hpp"
class Function : public Node{
public:
	std::string name;
	Type type;
	std::vector<Declaration *> params;// foo(int a, char b)
	std::vector<Declaration *> Declarations;// defining variables; 
	std::vector<std::pair<Declaration *,int> > Stack;
	std::vector<Statement *> body; //if else goto for..
	Function(std::string n, Type t, std::vector<Declaration *> p, std::vector<Statement *> b) : name(n), type(t), params(p), body(b){};
	void ProduceIR(IR_List *IR, std::vector<std::pair<Declaration *,int> > Stk);
	void SeperateDeclarationsFromBody();//seperate declaration statements from body and store in declarations
	// to be used in function initializer.


};

#endif
