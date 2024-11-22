#include <iostream>
using namespace std;
int main() {
    cout << "Guess the number. 1 - 25 \n ";
    int number=18;
    int input=0;
    
 while (input!=number) {
        cout << "Enter Number: ";
        cin >> input;

    if (input>number) {
        cout << "Guess less.\n";
    }
    else if (input<number) {
        cout << "Guess higher.\n";
    }
   }
   cout << "GUESSED!\n";
   return 0;
}