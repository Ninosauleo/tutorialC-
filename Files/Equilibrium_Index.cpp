#include <stdio.h>
/**
Equilibrium index of an array is an index such that the sum of elements at lower indexes is equal to the sum of elements at higher indexes. For example, in an arrya A:

A[0] = -7, A[1] = 1, A[2] = 5, A[3] = 2, A[4] = -4, A[5] = 3, A[6]=0

3 is an equilibrium index, because:
A[0] + A[1] + A[2] = A[4] + A[5] + A[6]

6 is also an equilibrium index, because sum of zero elements is zero, i.e., A[0] + A[1] + A[2] + A[3] + A[4] + A[5]=0

7 is not an equilibrium index, because it is not a valid index of array A.

Write a function int equilibrium(int[] arr, int n); that given a sequence arr[] of size n, returns an equilibrium index (if any) or -1 if no equilibrium indexes exist.
 */
/*
Idea:
1) Initialize leftsum  as 0
2) Get the total sum of the array as sum
3) Iterate through the array and for each index i, do following.
    a)  Update sum to get the right sum.
           sum = sum - arr[i]
       // sum is now right sum
    b) If leftsum is equal to sum, then return current index.
    c) leftsum = leftsum + arr[i] // update leftsum for next iteration.
4) return -1 // If we come out of loop without returning then
             // there is no equilibrium index
 */

int solution(vector<int> &A) {
    long long sum = 0;      // initialize sum of whole array, takes big big numbers
    long long leftsum = 0; // initialize leftsum, takes big big numbers
    int i;
    int n = A.size();
    
    cout << "Size of n " << n << endl;
    if(&A == NULL || (A.size() > 100000)){ //checks that the size of the array is 100000
        return -1;
    }
    /* Find sum of the whole array first*/
    for (i = 0; i < n; ++i){
        sum += A[i];
    }
    
    for( i = 0; i < n; ++i) {
        sum -= A[i]; // sum is now right sum for index i, we take the first index so later we add it to sumLeft
        
        if(leftsum == sum){
            
            return i;
        }
        
        leftsum += A[i];
    }
    /* If no equilibrium index found, then return 0 */
    return -1;
}
