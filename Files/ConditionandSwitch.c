//IO stands for input and output stream
#include <iostream>

using namespacestd;

int main() {

    //In switch we can choose either character or integers because they are treated as the same :)
    int a;
    cout << "Enter a: " << endl;
    cin >> a;

    int b;
    cout << "Enter b: " << endl;
    cin >> b;


    switch (a) {
        case 0 ... 5:
            cout << "The number a is between 0 and 5" << endl;
            break;
        case 6 ... 10:
            cout << "The number a is between 11 and 25" << endl;
            break;
        case 11 ... 15:
            cout << "The number a is between 11 and 15" << endl;
            break;
        default:
            cout << "The number a is too big :O " << endl;
            break;
    }

    //CONDITION OPERATOR ? instruction that will be executed if condition is true

    string message = (a > b) ? "a > b" : "b >= a";

    cout << message << endl;
    cout << ((a > b ? a : b) + 10) << endl;


    return 0;
}