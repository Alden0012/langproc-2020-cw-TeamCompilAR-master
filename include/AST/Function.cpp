// Function
#include "Function.hpp"

void Function::SeperateDeclarationsFromBody(){
	for(int i = 0; i< Declarations.size();i++){
		Declaration *temp = Declarations[i];
		if(temp){
			Declarations.push_back(temp);
		}
	}
}

void Function::ProduceIR(IR_List *IR, std::vector<std::pair<Declaration *,int>> Stk){
	// Moving stack and frame pointer
	for(int i = 0; i < Stk.size();i++){
		Stack.push_back(Stk[i]);
	}
	int stack_size = 8;
	//calculate stack size and make stack from declarations
	for(int i = 0; i < Declarations.size();i++){
		Stack.push_back(std::make_pair(Declarations[i],stack_size));
		stack_size += Declarations[i]->returnSize();
	}
	//recursively form declarations used in statements
	for(int i = 0;i < body.size();i++){
		if(!body[i]->isDeclaration()){
			stack_size += body[i]->returnDeclarationSize();
		}
	}
	std::cout << name << ":" << std::endl;
	std::cout << "        " << "addiu $sp, $sp,-"<< stack_size  << std::endl;
	std::cout << "        " << "sw $fp,"<< stack_size-4 << "($sp)" << std::endl;
	std::cout << "        " << "move $fp, $sp" << std::endl;
	// Params
	// Maximum 4?
	//add them to stack
	int saved_stack = stack_size;
	for(int i = 0; i < params.size();i++){
		std::cout << "        " << "sw $" << i+4 << "," << stack_size <<"($fp)"<< std::endl;
		Stack.push_back(std::make_pair(Declarations[i],stack_size));
		stack_size += (params[i]->returnSize());
	}
	//Body
	for(int i = 0;i<body.size();i++){
		body[i]->ProduceIR(IR,Stack);
	}
	std::cout << "        " << "nop"<< std::endl;
	std::cout << "        " << "move $sp,$fp" << std::endl;
	std::cout << "        " << "lw $fp,"<<saved_stack-4<< "($sp)" << std::endl;
	std::cout << "        " << "addiu $sp,$sp," << saved_stack << std::endl;
	std::cout << "        " << "j $31" << std::endl;
	std::cout << "        " << "nop"<< std::endl;

 }


