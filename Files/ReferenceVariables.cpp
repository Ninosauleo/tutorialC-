//IO stands for input and output stream
#include <iostream>


using namespace std;

/*
 * Reference variables
 * They need to be initialized before using them.
 * They can't change associations / connections.
 * They need to be the same type as associated variable.
 */


void swap(int &, int&);

int main() {



    string name = "Nino";

    cout << name << " address of variable is: " << &name << endl;

    string &nr_6 = name; //initialize the reference variable

    cout << nr_6 << " address of variable is: " << &nr_6 << endl;

    nr_6 = "Potato";

    cout << name << " address of variable is: " << &name << endl;

    cout << nr_6 << " address of variable is: " << &nr_6 << endl;

    /*
     * You can use it to swap values
     */

    int a = 10;
    int b = 20;

    swap(a, b);
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;



    return 0;
}

void swap(int &a, int &b){ //without being a reference they wouldn't change outside this function.
    int tmp;
    tmp = a;
    a = b;
    b = tmp;
}