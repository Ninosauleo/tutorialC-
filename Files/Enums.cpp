//IO stands for input and output stream
#include <iostream>


using namespace std;

/*
 * Enum - enumeration type
 */

enum dayOfWeek{
    M = 1, TU, W, TH, F, SA, SN
};

string getDay(dayOfWeek);

int main() {
    int i; //you can make i a char and assign a value Char in the enum :)
    cout << "Enter the day of the week" << endl;
    cin >> i;

    cout << getDay(dayOfWeek(i)) << endl;

    return 0;
}

string getDay(dayOfWeek day){
    switch (day){
        case M :
            return "Monday";

        case TU :
            return "Tuesday";

        case W :
            return "Wednesday";

        case TH :
            return "Thursday";

        case F :
            return "Friday";

        case SA :
            return "Saturday";

        case SN :
            return "Sunday";

        default :
            return "You typed something wrong";

    }
}