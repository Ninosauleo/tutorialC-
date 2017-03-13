//IO stands for input and output stream
#include <iostream>

using namespace std;

int main() {
    //Bitwise Operators
    /*
     * Bit level is either 0 or 1.
     * 0101 8 bits is one byte
     *
     * Example in Decimal:
     * 126 = 1 * 10 ^ 2 + 2 * 10 ^ 1 + 6 * 10 ^ 0 = 100 + 20 + 6;
     *
     * Bitwise Notation:
     * 1010 = 1 * something + 0 * something + 1 * something + 0 * something.
     * 1010 = 1 * 2 ^ something + 0 * 2 ^ something + 1 * 2 ^ something + 0 * 2 ^ something. //multiplied by two because is either 0 or 1.
     * 1010 = 1 * 2 ^ 3 + 0 * 2 ^ 2 + 1 * 2 ^ 1 + 0 * 2 ^ 0. //position - 1 is the number you raise.
     * 1010 = 1 * 2 ^ 3 + 1 * 2 ^ 1 = 8 + 2 = 10; you can skip the zeros.
     *
     */

    /*
     * Bitwise AND &
     * Bitwise OR |
     * Bitwise NOT ~ (Tilde)
     * Bitwise XOR (exclusive or) ^ (caret). Only one needs to be true in order to be true.
     * Bitwise Left Shift <<. Moves bits to the left.
     * Bitwise Right Shift >>. Moves bits to the right.
     */

    cout << (10 & 2) << endl;

    /*
     * Conjuction only true when both are true
     * 1010 = 10
     * 0010 = 2
     * ----
     * 0010 = 2. Because both are true on the third bit and 0010 is 2.
     */

    cout << (10 | 2) << endl;

    /*
     * OR only true when either is true
     * 1010 = 10
     * 0010 = 2
     * ----
     * 1010 = 10. Because only one needs to be true. in this case the first one
     */

    cout << (10 ^ 2) << endl;

    /*
     * XOR only true when either is true and both cannot be true.
     * 1010 = 10
     * 0010 = 2
     * ----
     * 1000 = 8. Because only one needs to be true. in this case the first one
     */

    cout << (~10) << endl;

    /*
     * 1010
     * ----
     * 0101. The not changes all the zeros in front e.g. ...00001010 to ones (1) ...11110101 so the number becomes negative.
     */

    cout << (10 << 3) << endl; //This means we are multiplying 10 by 2 raised raised to the power of 3.
    /*
     * 000000000000000000000001010
     * ---------------------------
     * 000000000000000000001010000 = 80.
     */

    cout << (10 >> 1) << endl;
    /*
     * 000000000000000000000001010
     * ---------------------------
     * 000000000000000000000000101 = 5.
     */

    return 0;
}