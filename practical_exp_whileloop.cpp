/*  UNFINISHED!!!!!!!!
*/
#include <iostream>
using namespace std;
int main() {
    cout << "Practical Example of a while loop?? v3\n";
    int number;
    start:
    cout << "Enter Nubmer: ";
    cin >> number;
    while(number>=5) {
        if (number>=5) {
            cout << "Number is <=5, terminating.\n";
        }
        else {
            cout << "Retry.\n";
            goto start;
        }
        number++;
    }
    
}