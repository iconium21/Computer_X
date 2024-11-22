#include <iostream>
using namespace std;
int main() /*
            The length() function is used to find the length of a string. Example usage: (used in cout)
            stringName.length()
*/
{
 cout << "Length of String (v1.3) \n";
 string text = "How long is this text!??";
 cout << "The length of the string 'text' is: \t" << text.length() << std::endl;
 return 0;
}