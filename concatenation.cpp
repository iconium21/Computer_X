#include <iostream>
using namespace std;
int main() {
    /* The + operator can be used 
       between strings to add them 
       together to make a new string.
        This is called concatenation
    */ 
    string firstName, lastName; //Initialize strings.
    cout << "Enter First name: ";
    cin >> firstName;
    cout << "\n Enter Last name: ";
    cin >> lastName;
    string fullName = firstName + lastName; //Concatenation
    cout << fullName << std::endl;
    return 0;
}