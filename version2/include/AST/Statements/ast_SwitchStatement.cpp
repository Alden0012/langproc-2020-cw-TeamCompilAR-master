#include "ast_SwitchStatement.hpp"
#include <vector>
#include <string>
#include <tuple>
#include "../ast_MakeLabel.hpp"
void SwitchStatement::OutputMIPS(Stack *stk){
    *(BodyStack) = *(stk);
    Body->PopulateStack(BodyStack,stk->size);
    expr->OutputMIPS(stk,8);
    std::string SwitchEnd = MakeLabel("SwitchEnd");
    BodyStack->ScopeEND = SwitchEnd;
    std::vector< std::tuple<std::string,int,bool> * > Labels = Body->returnLabels(stk);
    std::string Default;
    for(int i = 0; i<Labels.size();i++){
        if(Labels[i]){
        if(!std::get<2>(*(Labels[i]))){
        std::cout << "        " << "li $9, " << std::get<1>(*(Labels[i])) << std::endl;
        std::cout << "        " << "xor $" << 10 << ", $" << 8  << ", $" << 9 << std::endl;
        std::cout << "        " << "sltiu $" << 10 << ", $" << 10 << ", 1" << std::endl;
        std::cout << "        " << "andi $" << 10 << ", $" << 10 << ", 0x00ff" << std::endl;
        std::cout << "        " << "bne $10, $0, " << std::get<0>(*(Labels[i])) << std::endl;
        std::cout << "        " << "nop" << std::endl;
        }else{
        Default = std::get<0>(*(Labels[i]));
        }
        }
    }
    if(Default != ""){
        std::cout << "        " << "j " << Default << std::endl;
        std::cout << "        " << "nop" << std::endl;
    }
    std::cout << "        " << "j " << SwitchEnd << std::endl;
    std::cout << "        " << "nop" << std::endl;
    Body->OutputMIPS(BodyStack);
    std::cout << SwitchEnd << ":" << std::endl;
}