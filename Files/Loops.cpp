//IO stands for input and output stream
#include <iostream>

using namespace std;

int main() {
    //LOOPS

    /*
     * Program that counts number of digits.
     */
    cout << "Insert a number: "<< endl;
    int nr;
    cin >> nr;
    int nrOfDigits = 1;
    int tmp = nr;
    while(tmp /= 10){ //when tmp reaches 0 it means it's false :)
        nrOfDigits++;
    }
    cout << "The number: " << nr << " has " << nrOfDigits << " digits" << endl;

    /*
     * 1 2 3 4 5  6  7  8  9  10
     * 2 4 6 8 10 12 14 16 18 20
     * 3 6 9 12 ...
     * 4 8...
     */
    for(int i = 1; i <= 10; i++){
        for(int j = 1; j <= 10; j++){
            cout << i * j << " ";
        }
        cout << endl;
    }


    return 0;
}