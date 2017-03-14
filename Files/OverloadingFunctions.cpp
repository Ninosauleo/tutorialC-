//IO stands for input and output stream
#include <iostream>

using namespace std;

/*
 * Overloading Functions having the same name in functions but having different paramaters.
 */
int power(int, int);
double power(double, int);

int main() {

    cout << power(2, 6) << endl;

    return 0;
}

/*
 * 2 ^3 = 2 * 2 * 2
 */

int power(int base, int exponent){
    int tmp = base;
    int i = 0;
    while(i++ < exponent){
        cout << tmp << " ^ " << i << " = " << base << endl;
        if(i != exponent) {
            base *= tmp;
        }
    }

    return base;
}

double power(double base, int exponent){
    double tmp = base;
    int i = 0;
    while(i++ < exponent){
        base *= tmp;
        cout << tmp << " ^ " << i << " = " << base << endl;
    }
    return base;
}