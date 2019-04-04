#include "headers/serie1.h"

void Serie1::ese1(){
    using namespace std;
    cout << "ese1()" << endl;
    const int THISYEAR{2018};
    string yourName;
    int birthYear;
    cout << "what is your name? : " << flush;
    getline(cin, yourName);
    cout << "what year were you born? : ";
    cin >> birthYear;
    while(cin.fail()){
        cin.clear();
        cin.ignore(255, '\n');
        cout << "what year were you born? : ";
        cin >> birthYear;
    }
    cout << "Your name is " << yourName <<
            " and your are : " << (THISYEAR - birthYear) << endl;
}

void Serie1::ese2(std::string txt){
    using namespace std;
    cout << "ese2()" << endl;
    int lucky{7};
    float pi{3.14};
    double e{2.71};
    ofstream outf;
    outf.open("mydata");
    outf << lucky << endl;
    outf << pi << endl;
    outf << e << endl;
    outf <<txt<< endl;
    outf << "SWAG" << endl;
    outf.flush();
    outf.close();

    ifstream inf;
    inf.open("mydata");

    /* Un altro tipo di soluzione altenrativo con un po di strusi
    const int MAX_NUMBER_OF_LINES = 10;
    string textArray[MAX_NUMBER_OF_LINES];
    cout << "inf flag eof status BEFPRE: " << inf.eof() << endl;
    int i = 0;
    while(!inf.eof() ){
        getline(inf, textArray[i++]);
        cout << textArray[i - 1] << endl;
        if(i >= MAX_NUMBER_OF_LINES) {
            cout << "Number maximu of lines reached [" << MAX_NUMBER_OF_LINES
                 << "] lines "<< endl;
            break;
        }
    }
    cout << "inf flag eof status AFTER: " << inf.eof() << endl;


    //======
    cout << textArray->length() << endl;
    cout << (textArray + 1)->length() << endl;
    //=====LINEE SOPRA E SOTTO SONO UGUALI
    //Spiegazione figa: (http://www.cplusplus.com/forum/general/110091/)
    cout << (*textArray).length() << endl;
    cout << (*(textArray + 1) ).length() << endl;
    //======

    cout << textArray[0] << endl;
    cout << textArray[1] << endl;
    cout << textArray[2] << endl;
    cout << textArray[3] << endl;
    */

    inf >> lucky;
    inf >> pi;
    inf >> e;
    string testo;
    //Perché questo ignore? spiegazione figa: (https://stackoverflow.com/questions/21567291/why-does-stdgetline-skip-input-after-a-formatted-extraction)
    inf.ignore(1, '\n');
    getline(inf, testo);


    cout << "lucky=" << lucky << ", pi=" << pi
         << ", e=" << e << ", testo= " << testo << endl;
    cout << !inf.eof() << endl;


    /*
    while (inf.eof()) {
        inf.getline(text, 10);
        cout << text << endl;
    }
    */
    inf.close();
}


void Serie1::ese3(){
    using namespace std;

    char str[11];
    cin.get(str, 10);
    cout << "-" << str << "-" << endl;
    // cin.ignore(3);


    char z;
    ifstream ifs;
    ifs.open("mydata");

    while(!ifs.eof()){
        ifs.get(z);
        cout << "-" << z << "-" << endl;
    }

    ifs.close();
}
