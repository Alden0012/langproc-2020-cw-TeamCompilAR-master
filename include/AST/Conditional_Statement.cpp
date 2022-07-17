#include "Conditional_Statement.hpp"

int Conditional_Statement::returnDeclarationSize(){
	int DeclSize = 0;
	for(int i = 0; i < TrueBranch.size();i++){
		DeclSize += TrueBranch[i]->returnDeclarationSize();
	}
	for(int i = 0; i < FalseBranch.size();i++){
		DeclSize += FalseBranch[i]->returnDeclarationSize();
	}
}