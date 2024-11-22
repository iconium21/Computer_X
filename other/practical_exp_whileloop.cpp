/*  UNFINISHED!!!!!!!!
*/
#include <cstdlib>
#include <iostream>
#include <unistd.h>
#include <unistd.h>
//not on linux? #include <conio.h>
using namespace std;
int main() {
    cout << "Practical Example of a while loop?? v7.52\n";
   
    int number=0;
    int opt;
    char key = 'a';

    cout << "Choose one:\n [1]= while(true) loop\n [2]= while(false) loop. \n Option: ";
    cin >> opt;
    if (opt==1) {
        goto true_loop;
    }
    else if (opt==2) {
        goto false_loop;
    }

    true_loop:
    while(true) {                // infinite loop if statement is not reached!
    cout << "Enter Nubmer: ";
    cin >> number;
    if (number>=5) {            // statement!
        cout << "Number is > or = to 5. Terminating.\n";
        break;
    }
    else {
        cout << "Retry.\n";
    }
}

    false_loop:
        cout << "while(false) loop doesn\'t exist. And while(!true) will never be executed.\n";
       // cout << "Press enter to exit...";
       // cin >> key; cout << endl;
    return 0;
}