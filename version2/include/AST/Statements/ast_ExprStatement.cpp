#include "ast_ExprStatement.hpp"
void ExprStatement::OutputMIPS(Stack *stk){
    expr->OutputMIPS(stk,8);
}