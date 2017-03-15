//IO stands for input and output stream
#include <iostream>

#define PI 3.14

using namespace std;

void initMenu();
void menuDecision(int);
double areaCircle(double);
double areaSquare(double);
double areaRectangle(double, double);
double areaTriangle(double, double);
bool isValid(string);

int main() {
    int choice;
    char cont;
    do {
        initMenu();

        while (!(cin >> choice)) { //while choice is not the type of choice
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); //ignore after the first input in the buffer
            cout << "You type the wrong input" << endl;
            initMenu();
        }

        menuDecision(choice);

        do {
            cout << "Do you want to continue the program? (Y/N)" << endl;
            cin >> cont;
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); //ignore after the first input in the buffer

        } while (cont != 'y' && cont != 'Y' && cont != 'n' && cont != 'N');

    } while (cont == 'y' || cont == 'Y');

    return 0;
}

void initMenu(){
    cout << "Enter the Option" << endl;
    cout << "1. Circle" << endl;
    cout << "2. Square" << endl;
    cout << "3. Rectangle" << endl;
    cout << "4. Triangle" << endl;

}

void menuDecision(int choice){
    double r, a, b, h;
    switch(choice){
        case 1 :
            cout << "Enter the Radius: " << endl;
            do {cin >> r;} while (!isValid("The radius is wrong please type again"));
            areaCircle(r);
            break;
        case 2 :
            cout << "Enter the side of the square: " << endl;
            do {cin >> a;} while (!isValid("The size is wrong please type again"));
            areaSquare(a);
            break;
        case 3 :
            cout << "Enter the width and height of a rectangle " << endl;
            do {cin >> a >> b;} while (!isValid("The width and height is wrong please type again"));
            areaRectangle(a, b);
            break;
        case 4 :
            cout << "Enter the base and height of a triangle: " << endl;
            do {cin >> a >> h;} while (!isValid("The base and height is wrong please type again"));
            areaTriangle(a, h);
            break;
        default :
            cout << "You didn't choose any of the available options" << endl;
    }
}

double areaCircle(double radius){
    double result = PI * radius * radius;
    cout << "The area of the circle with radius " << radius << " is " << result << endl;

    return result;
}


double areaSquare(double side){
    double result = side * side;
    cout << "The area of the Square with side " << side << " is " << result << endl;

    return result;
}

double areaRectangle(double sideA, double sideB){
    double result = sideA * sideB;
    cout << "The area of the Rectangle with sides " << sideA << " " << sideB << " is " << result << endl;

    return result;
}

double areaTriangle(double base, double height){
    double result = (1/2.0) * base * height ;
    cout << "The area of the triangle with base " << base << " and height " << height << " is " << result << endl;

    return result;
}

bool isValid(string error_message){
    if(cin.rdstate()){ //state is wrong when is not equal to zero
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); //ignore after the first input in the buffer
        cout << error_message << endl;
        return false;
    }
    return true;
}