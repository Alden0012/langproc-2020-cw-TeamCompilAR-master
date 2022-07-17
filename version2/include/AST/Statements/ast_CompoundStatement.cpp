#include "ast_CompoundStatement.hpp"
void CompoundStatement::OutputMIPS(Stack *stk){
    *(BodyStack) = *(stk);
    Body->PopulateStack(BodyStack,stk->size);
    Body->OutputMIPS(BodyStack);
}