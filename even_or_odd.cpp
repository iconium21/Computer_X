#include <iostream>
using namespace std;
int main()
{
    cout << "==Even Or Odd v1.4\n";
    int number;
    cout << "Enter your Number:  ";
    cin >> number;
    if ((number%2)==0) {
     cout << "\nNumber " << number << " is even.\n";
    }
    else {
     cout << "Number " << number << " is odd.\n";
    }
    return 0;

}