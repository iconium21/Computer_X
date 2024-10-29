#include <cstdio>
#include <iostream>
using namespace std;
int main() {
    /* The + operator can be used 
       between strings to add them 
       together to make a new string.
        This is called concatenation
    */ 
    cout << "Concatenation v1.1 \n";
    string firstName, lastName; //Initialize strings.
    cout << "Enter First name: ";
    getline(cin, firstName);
    cout << "\n Enter Last name: ";
    getline(cin , lastName);
    string fullName = firstName + " " + lastName; //Concatenation
    cout << fullName << std::endl;
    return 0;
}