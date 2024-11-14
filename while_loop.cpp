#include <iostream>
using namespace std;
int main() {
    cout << "=== while loop v2\n";
    int a;
    start: // Start label
    cout << "Enter integer: ";
    cin >> a;
    while (a<5) { //while loop will run forever unless the condition is reached. 
       goto start; // Program should go to label start if the condition is false.
    }
    return 0;
}