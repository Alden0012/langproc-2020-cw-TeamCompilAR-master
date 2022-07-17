#include "Variable.hpp"
#include <iostream>

int Variable::returnStackOffset(std::vector<std::pair<Declaration *,int> > Stack){
	for(int i = 0;i < Stack.size();i++){
		if ((Stack[i].first)->Variable_Identifier == Identifier){
			return (Stack[i].second);
		}
	}
}
void Variable::ProduceIR(IR_List *IR, std::vector<std::pair<Declaration *,int> > Stack,int regno){
	int Stack_Offset = returnStackOffset(Stack);
	//load variable to a register
	std::cout << "        " << "lw " << "$" << regno <<"," << Stack_Offset <<"($fp)" << std::endl;
	std::cout << "        " << "nop" << std::endl;
}