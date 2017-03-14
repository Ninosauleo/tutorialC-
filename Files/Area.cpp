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

int main() {
    int choice;
    char cont;
    do {
        initMenu();

        cin >> choice;

        menuDecision(choice);

        cout << "Do you want to continue the program? (Y/N)" << endl;
        cin >> cont;

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
            cin >> r;
            areaCircle(r);
            break;
        case 2 :
            cout << "Enter the side of the square: " << endl;
            cin >> a;
            areaSquare(a);
            break;
        case 3 :
            cout << "Enter the width and height of a rectangle " << endl;
            cin >> a >> b;
            areaRectangle(a, b);
            break;
        case 4 :
            cout << "Enter the base and height of a triangle: " << endl;
            cin >> a >> h;
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
    cout << "The area of the Rectangle with sides " << sideA << sideB << " is " << result << endl;

    return result;
}

double areaTriangle(double base, double height){
    double result = (1/2.0) * base * height ;
    cout << "The area of the triangle with base " << base << " and height " << height << " is " << result << endl;

    return result;
}