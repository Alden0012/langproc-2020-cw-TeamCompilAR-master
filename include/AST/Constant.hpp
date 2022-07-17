#ifndef CONSTANT_HPP
#define CONSTANT_HPP
#include "Expr.hpp"
#include "IR_List.hpp"
#include <vector>
#include "Declaration.hpp"
class Constant : public Expr{
public: 	
	void ProduceIR(IR_List *IR, std::vector<std::pair<Declaration *,int> > Stack);

};


#endif