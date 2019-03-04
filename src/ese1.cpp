#include "headers/ese1.h"

Ese1::Ese1(){    

}

void Ese1::ese1(){
    using namespace std;
    cout << "ese1()" << endl;
    const int THISYEAR{2018};
    string yourName;
    int birthYear;
    cout << "what is your name?" << flush;
    getline(cin, yourName);
    cout << "what year were you born?";
    cin >> birthYear;
    while(cin.fail()){
        cin.clear();
        cin.ignore(255, '\n');
        cin >> birthYear;
    }
    cout << "Your name is " << yourName <<
            " and your are : " << (THISYEAR - birthYear) << endl;



}

