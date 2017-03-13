//IO stands for input and output stream
#include <iostream>
#include <unistd.h>
#include <term.h>

using namespace std;

// Calculator

int main() {
    double variable1, variable2;

    beginning :

    cout << "Enter First Number: " << endl;
    cin >> variable1;

    cout << "Enter Second Number: " << endl;
    cin >> variable2;

    cout << "What do you want to do?: " << endl;
    cout << "add (+) , divide (/) , subtract (-) or multiply(*)? " << endl;

    char decision;
    cin >> decision;

    switch (decision){
        case '+':
            cout << variable1 << " + " << variable2 << " = " << (variable1 + variable2 ) << endl;
            break;
        case '-':
            cout << variable1 << " - " << variable2 << " = " << (variable1 - variable2 ) << endl;
            break;
        case '/':
            if(variable2) { //same as variable != 0.
                cout << variable1 << " / " << variable2 << " = " << (variable1 / variable2) << endl;
            } else {
                cout << "You can't divide by zero " << endl;
            }
            break;
        case '*':
            cout << variable1 << " * " << variable2 << " = " << (variable1 * variable2 ) << endl;
            break;
        default:
            cout << "Error Wrong Character" << endl;
    }

    cout << "Do you want to continue? (Y/N) " << endl;

    char decision2;
    cin >> decision2;

    if(decision2 == 'y' || decision2 == 'Y'){
        //we can also do a DO WHILE loop;
        goto beginning;
    }

    return 0;
}