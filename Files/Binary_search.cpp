
/*
 *  Example of the binary search algorithm
 */

#include <iostream>

using namespace std;

int binarySearch(int array[], int size, int searchValue) {
    int low = 0; //low index
    int high = size - 1; //high index
    
    int mid;
    
    while (low <= high) {
        mid = (low + high) / 2;
        
        if(searchValue == array[mid]) { // if search value equals mid index return the index.
            return mid;
        }
        else if (searchValue > array[mid]) { // if the search value is bigger than mid index. we move the low
            low = mid + 1;
        }
        else {
            high = mid - 1; //  if the search is less than the middle. We move the high.
        }
    }
    
    return -1;
    
}

int main() {
    int a[] = {12, 22, 34, 47, 55, 67, 82, 98};
    
    int userValue;
    
    cout << "Enter an integer: " << endl;
    cin >> userValue;
    
    int result = binarySearch(a, 8, userValue);
    
    if(result >= 0) {
        cout << "The number " << a[result] << " was found at the"
        " element with index " << result << endl;
    }
    else {
        cout << "The number " << userValue << " was not found. " << endl;
    }
}
