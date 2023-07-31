#include "subject.h"
using namespace std;
void Subject::notifyPlayer(int target, int eventPara1,int eventPara2){
    for(int i = 0; i<p.size(); i++){
        (p.at(i))->notify(target, eventPara1, eventPara2);
    }
}
void Subject::setInput(int input){this->input = input;}
int Subject::getInput(){return input;}
void Subject::start(){
    while(true){
        for(int i = 0; i<p.size();i++){
            try{notifyPlayer(i,0,0);}
            catch(int){return;}
        }
    }
}
void Subject::attachPlayer(AbstractPlayer* player){
    p.emplace_back(player);
}

void Subject::notifyDisplay(std::string regular_cmd) {
    return;
}
