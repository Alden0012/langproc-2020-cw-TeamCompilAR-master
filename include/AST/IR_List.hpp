//Vector which stores IR
#ifndef IR_LIST_HPP
#define IR_LIST_HPP
#include <vector>
#include "Expr.hpp"
#include "Node.hpp"
class IR_List : public Node{
	std::vector<Expr*> List;
public:
	void OutputMIPS();
	void PushIR(Expr* IR);

};

#endif