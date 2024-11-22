#include <iostream>
using namespace std;
int main() {
    /* A string in C++ is actually an object,
       which contain functions that can perform
       certain operations on strings.
       For example, you can also concatenate 
       strings with the append() function
    */ 
    string firstName, lastName; //Initialize strings.
    cout << "Append v1 \n";     
    cout << "Enter First name: ";
    cin >> firstName;           // ALWAYS TYPE SINGLE WORDS!!
    cout << "\n Enter Last name: ";
    cin >> lastName;            // ALWAYS TYPE SINGLE WORDS!!
    string fullName = firstName.append(lastName); 
    cout << fullName << std::endl;
    return 0;
}