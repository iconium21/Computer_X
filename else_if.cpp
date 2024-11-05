#include <cstdlib>
#include <iostream>
using namespace std;
int main(){
    cout << "==Else if v1.2\n";
program_start: // label
    int joinYear;
    cout << "Enter your join year (E.g 2005):  ";
    cin >> joinYear;

    if(joinYear<1991) {
        cerr << "\nERROR: Join year is less than 1991. The company did not exist back then.\n";
        goto program_start;
    }
    if(joinYear>=2001 && joinYear<=2015)
    {
        cout << "\nYou can receive the new bonus!\n";
    }
    else if (joinYear<=2001 && joinYear>=1991) {
        cout << "\n You can be promoted to Manager.\n";
    }
    
    else {
        cout << "\nYou cannot receive the new bonus!\n";
    }
    return 0;
}
