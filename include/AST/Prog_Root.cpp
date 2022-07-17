// Top of the AST 
#include "Prog_Root.hpp"

void Prog_Root::ProduceIR(IR_List *IR){
	for(int i = 0;i < Declarations.size();i++){
		Stack.push_back(std::make_pair(Declarations[i],0));
		if(Declarations[i]->value){
			std::cout << Declarations[i]->Variable_Identifier << ":" << std::endl;
			if(Declarations[i]->returnSize() == 4){
				std::cout << "        " << ".word" << "   " << Declarations[i]->evaluateValue() << std::endl;
			}
		}
	}
	for(int i = 0;i < Functions.size();i++){
		Functions[i]->ProduceIR(IR,Stack);
	}

}