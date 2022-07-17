#include "Declaration.hpp"
#include "IR_List.hpp"
#include "Type.hpp"
#include <iostream>

void Declaration::ProduceIR(IR_List *IR, std::vector<std::pair<Declaration *,int> > Stack){ 
	int Stack_Offset;
	for(int i = 0;i < Stack.size();i++){
		if ((Stack[i].first)->Variable_Identifier == Variable_Identifier){
			Stack_Offset = Stack[i].second;
			
		}
	}
	//IR produced only if initialized
	if(value){
		switch(type->type_n){
			case Type::T_INT:
				value->ProduceIR(IR,Stack,2);
				std::cout << "        " << "sw " << "$2" << "," << Stack_Offset << "($fp)" << std::endl;
				break;
			case Type::T_DOUBLE:
				break;
			case Type::T_FLOAT:
				break;
			case Type::T_CHAR:
				value->ProduceIR(IR,Stack,2);
				std::cout << "        " << "sb " << "$2" << "," << Stack_Offset << "($fp)" << std::endl;
				break;
			case Type::T_UNSIGNED:
				value->ProduceIR(IR,Stack,2);
				std::cout << "        " << "sw " << "$2" << "," << Stack_Offset << "($fp)" << std::endl;
				break;
			case Type::T_SIGNED:
				value->ProduceIR(IR,Stack,2);
				std::cout << "        " << "sw " << "$2" << "," << Stack_Offset << "($fp)" << std::endl;
				break;
			case Type::T_ENUM:
				break;
			case Type::T_AUTO:
				break;
			case Type::T_STRUCT:
				break;
		}

	}
}

