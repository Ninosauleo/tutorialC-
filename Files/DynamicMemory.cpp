#include <iostream>

using namespace std;
/* Dynamic Memory Allocation */
int main()
{
    int amount;


    cout << "How many numbers do you want to store? " << endl;

    cin >> amount;

    int *p = new (nothrow) int [amount]; //dynamically allocated memory. different addresses. nothrow doesn't throw error

    if(p != NULL){ //note this doesn't work in the clion gcc compiler.
        for(int i = 0; i < amount ; i++){
            cout << "Enter the " << (i + 1) << " number: " << endl;
            cin >> p[i];
        }

        for(int i = 0; i < amount ; i++){
            cout << "P [" << (i) << "] = " << p[i] << endl;
        }
    } else{
        cout << "Not Enough memory" << endl;
    }




    delete []p; //free the space of memory

    return 0;
}
