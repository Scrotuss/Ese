#include <iostream>
#include "headers/ese1.h"

using namespace std;

namespace kevin {
extern int var1;
}
extern int var2;



namespace kevin {
int var1;
}

int var2;

int main(){
    Ese1::ese1();
    return 0;
}
