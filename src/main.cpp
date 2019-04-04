#include <iostream>
#include "headers/serie1.h"

using namespace std;

namespace kevin {
extern int var1;
}
//Posso dichiarare i namespaces anche separarmaente
namespace kevin {
int var1;
}

extern int var2;
int var2;


void modify(int& value){
    value = 12;
}

void modify(int* value){
    *value = 13;
}


void fun(string* x){
    cout << "Inside fun1(...)" << *x << endl;
    x = new string{"Hello world"};
}

void fun(string& x){
    cout << "Inside fun2(...)" << x << endl;
    x = "Hello world";
}


int main(){

    /*
    string* s1 = new string{"Ciao mondo1"};
    string s2 = "Ciao mondo2";
    fun(s2);
    cout << s2 << endl;
    cout << "===" << endl;
    int v{1};
    modify(v);
    cout << v << endl;
    modify(&v);
    cout << v << endl;
    */

    Serie1::ese2("Gesu pekinese");
    Serie1::ese3();
    return 0;
}
