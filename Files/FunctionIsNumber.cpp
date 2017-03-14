//IO stands for input and output stream
#include <iostream>

using namespace std;
string tmp;
//parameter are values our function can take
bool isNumber(string tmp);
void enterName();

int main() {

    do {
        enterName();
    } while(tmp[0] != '0');

    return 0;
}

bool isNumber(string tmp){


    bool isNumber = true;

    if(tmp[0] == '0'){
        return false;
    }

    for(int i = 0; i<tmp.length(); i++){
        if(!(tmp[i] >= 48 && tmp[i] <= 57 )){
            return false;
            break;
        }
    }
    return true;
}

void enterName(){
    cout << "Enter a number: " << endl;

    cin >> tmp;

    if (isNumber(tmp)) {
        cout << "Number entered properly" << endl;
    } else {
        cout << "Number was not entered properly" << endl;
    }

}