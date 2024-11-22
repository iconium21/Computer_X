#include <iostream> // gpl v3
using namespace std;
int main(){             // 3x+1 problem: If number is even, divide by 2. If it's odd, multiply by 3 and add 1.
    cout << "==3x+1 Problem v4:\n";
    int number;
    start:
    cout << "Enter Number: ";
    cin >> number;

    while (number!=1) { // LOOP if number is not equal to 1.
        if ((number%2)==0) {
            number /=2;
        }
        else if ((number%2)!=0) {
            number = (number*3)+1;
        }
        cout << number << endl;
    }
                if (number==1) {
            cout << "Number has reached one. Terminating.\n";
           // cout << "PROGRAM WILL RESTART, THIS IS A DEBUG FEATURE.\n";
           // goto start;
           
        }
    return 0;

}