//IO stands for input and output stream
#include <iostream>

using namespace std;

int main() {

    // ARRAYS
    int array[3]; //TYPE NAME[SIZE];

    array[0] = 1;
    array[1] = 12;
    array[2] = 17;
    cout << "Address of Array " << endl;
    cout << "array [0] " << array[0] << "address is " << &array[0] << endl; //&array is the same addres as the first index
    cout << "array [1] " << array[1] << "address is " << &array[1] << endl;
    cout << "array [2] " << array[2] << "address is " << &array[2] << endl;
    cout << endl;

    //Multidimensional Arrays

    int biArray[3][4] = {0};
    cout << "Address of Multidimensional Array " << endl;
    cout << "address is " << &biArray[0] << endl;
    cout << "address is " << &biArray[0][0] << endl;
    cout << "address is " << &biArray[0][1] << endl;
    cout << "address is " << &biArray[1] << endl;
    cout << "address is " << &biArray[1][0] << endl;
    cout << "address is " << &biArray[1][1] << endl;

    return 0;
}