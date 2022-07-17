#include "ast_globalscope.hpp"
#include "../ast_PostProc.hpp"
void GlobalScope::mergeNode(Node *Input){
    Function *temp = dynamic_cast<Function *>(Input);
    Declaration *temp2 = dynamic_cast<Declaration *>(Input);
    if(temp){
        Functions.push_back(temp);
    }
    else{
        Declarations.push_back(temp2);
    }
}
void GlobalScope::OutputMIPS(Stack *g){
    for(int i = 0;i<Declarations.size();i++){
        if(Declarations[i]){
        Declarations[i]->type->Global = true;
        g->add(Declarations[i]->name,0);
        g->addType(Declarations[i]->name,Declarations[i]->type);
        Declarations[i]->OutputMIPS();
        }
    }
    for(int i = 0;i<Functions.size();i++){
        Functions[i]->OutputMIPS(g);
    }
    PostProcessing();
}
