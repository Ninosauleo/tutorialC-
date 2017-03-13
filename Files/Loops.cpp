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
    
    
    
    /* Multiplication Table
     * 1 2 3 4 5  6  7  8  9  10
     * 2 4 6 8 10 12 14 16 18 20
     * 3 6 9 12 ...
     * 4 8...
     */
    for(int i = 1; i <= 10; i++){ //amount of rows, length of column.
        for(int j = 1; j <= 10; j++){ //amount of columns, length of rows.
            cout.width(4);
            cout << i * j << " ";
        }
        cout << endl;
    }
    
    cout << endl;
    
    
    /*
     * Exclude 5th row
     *
     * 1 2 3 4 5  6  7  8  9  10
     * 2 4 6 8 10 12 14 16 18 20
     * 3 6 9 12 ...
     * 4 8...
     */
    for(int i = 1; i <= 10; i++){ //amount of rows, length of column.
        if(i == 5){
            //break; stops all and leaves the external loop.
            continue; //everything after continue will stop but external loop will not end.
        }
        for(int j = 1; j <= 10; j++){ //amount of columns, length of rows.
            cout.width(4);
            cout << i * j << " ";
        }
        cout << endl;
    }
    
    cout << endl;
    
    /*
     * Same Code but with only one for Loop
     *
     * 1 2 3 4 5  6  7  8  9  10
     * 2 4 6 8 10 12 14 16 18 20
     * 3 6 9 12 ...
     * 4 8...
     */
    
    for(int i = 1, j = 1; i <= 10; i++){
        cout.width(4);
        cout << i * j;
        if(i == 10){
            j++;
            i = 0;
            cout << endl;
        }
        if (j == 10 + 1){
            break;
        }
    }
    
    
    return 0;
}
