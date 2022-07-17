#ifndef DECLARATION_STATEMENT_HPP
#define DECLARATION_STATEMENT_HPP
#include "Declaration.hpp"
#include <vector>
#include "IR_List.hpp"
#include <utility>
#include "Statement.hpp"

class Declaration_Statement : public Statement{
	Declaration *Decl;
public:
	Declaration *returnDecl();
	bool isDeclaration(){return true;}
	virtual void ProduceIR(IR_List *IR, std::vector<std::pair<Declaration *,int> > Stack){Decl->ProduceIR(IR,Stack);}
	virtual int returnDeclarationSize(){return 0;}
};

#endif