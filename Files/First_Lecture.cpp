//IO stands for input and output stream
#include <iostream>

using namespace std;

int main() {
    int A = 4, b =0 , c=10; //numbers from -2billions to 2billions, 4 bytes of memory.
    //VARIABLE_TYPE variable name;
    //cout stands for Console Output
    //std stands for standard
    //address of the variable &name_of_variable
    //int allocates 4 bits of memory
    cout << "a: " << A << " address is: "<< &A << endl;
    cout << "b: " << b << " address is: "<< &b << endl;
    cout << "c: " << c << " address is: "<< &c << endl;

    short int t1 = 5;//-32768 to 32767, 2 bytes
    float t2 = 5.12; //allocates 4 bytes of memory, numbers up tp 38 zeros
    double t3 = 5.12; //allocates 8 bytes of memory, numbers up to 308 zeros.
    cout << "t1: " << t1 << endl;
    cout << "t2: " << t2 << endl;
    cout << "t3: " << t3 << endl;

    char t4 = 'a';
    cout << "t4: " << t4 << endl;

    string y = "Hello I am a";
    string x = "sexy potato";
    string combinedStrings = y + " " + x;
    cout << "y + x " << combinedStrings << endl;


    //in boolean 0 is always false, other number is true.
    bool t6 = true;

    //unsigned short int, 0 to 65535. Takes only positive numbers
    unsigned short int t7 = 3700;
    cout << t7 << endl;

    //constants values
    const string NAMEOFNINO = "Nino";
    cout << NAMEOFNINO << endl;


    return 0;
}