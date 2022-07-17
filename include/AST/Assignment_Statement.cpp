#include "Assignment_Statement.hpp"
#include <iostream>
#include <vector>
#include "Declaration.hpp"
#include "IR_List.hpp"

void Assignment_Statement::ProduceIR(IR_List *IR, std::vector<std::pair<Declaration *,int> > Stack){
	int lv_stackOffset = lvalue->returnStackOffset(Stack);
	//evalue rhs store to $2
	rvalue->ProduceIR(IR,Stack,2);
	//store reg $2 to lvalue stack location
	std::cout << "        " << "sw " << "$2" << "," << lv_stackOffset << "($fp)" << std::endl;
}