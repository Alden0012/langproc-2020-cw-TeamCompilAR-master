//Vector which stores IR Code
#include "IR_List.hpp"

void IR_List::PushIR(Expr* IR){
	List.push_back(IR);
}