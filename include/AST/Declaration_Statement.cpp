#include "Declaration_Statement.hpp"

Declaration *Declaration_Statement::returnDecl(){
	return Decl;
}
int Declaration_Statement::returnDeclarationSize(){
	return Decl->returnSize();
}