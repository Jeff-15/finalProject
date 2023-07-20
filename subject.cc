#include "subject.h"
#include <vector>
using namespace std
void Subject::notifyPlayer(int target, int event){
    for(int i = 0; i<p.size(); i++){
        (p.at(i))->notify(target, event);
    }
}

