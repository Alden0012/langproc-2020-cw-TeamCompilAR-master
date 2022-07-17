#ifndef STATEMENT_HPP
#define STATEMENT_HPP
#include "Declaration.hpp"
#include "IR_List.hpp"
#include "Node.hpp"
class Statement : public Node{
public:
	virtual Declaration *returnDecl();
	virtual void ProduceIR(IR_List *IR, std::vector<std::pair<Declaration *,int> > Stack);
    virtual int returnDeclarationSize(){return 0;}
	virtual bool isDeclaration(){return false;}
};

#endif