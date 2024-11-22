#include <iostream>
using namespace std;
int main() {
    cout << "Advacned Strings v1.4 \n";
    string myString = "Aperture";
    cout << myString[0] << endl; // Print first character.
    cout << myString[1] << endl; // Print second character.
    cout << myString[myString.length() -1 ] << endl; // Print last character.
    cout << "\t\t Replacing characters! \n";
    myString[0] = 'B';
    cout << myString << endl;
    cout << "\t\t at() function \n";
    myString.at(1) = 'L';
    cout << myString;
    return 0;
}