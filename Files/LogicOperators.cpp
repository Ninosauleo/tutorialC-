//IO stands for input and output stream
#include <iostream>

using namespace std;

int main() {
    //addition operation +
    double a = 2;
    double b = 15;

    int c = 2;
    int d = 15;

    cout << a + b << endl; //addition
    cout << a - b << endl; //substraction
    cout << a * b << endl; //multiplication
    cout << a / b << endl; //division

    // 15 % 2 = 1 remainder is 1 because 15 - 14 = 1.
    cout << c % d << endl;

    //incrementation
    //c = c + 1;
    c += 1;
    //there is many ways /=, -=, /=, %=, etc.

    cout << c << endl;

    //Post_increment operator ++c
    //Pre_increment operator  c++

    cout << c++ << endl; //POSTincrementation first print later increment
    cout << c << endl;
    //decrementation

    //Relational Operators
    /*
     * ==, !=, <=, <, >=, <
     */
    cout << (c != a) << endl; //true is 1 false is 0


    //Logical Operators
    /*
     * AND conjunction &&. Both expressions need to be ONLY true to be true
     * OR disjunction ||. One needs to be true in order to be true.
     * !() makes it logically negative, means not. !(true) is false and !(false) is true.
     */
    cout << (c != a && c == a) << endl;
    cout << (c != a || c == a) << endl;




    return 0;
}