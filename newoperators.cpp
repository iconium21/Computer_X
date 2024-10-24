#include <iostream>
using namespace std;
int main()
{
 int a=3,b=4,c=0,d=0; // All variables must be initialized! e.g  'int a=1,b=2,c;' is invalid! Set it to zero
 c+=b;            // c+=b means: c = c+b 
 d-=b;            // d-=b means: d = d-b  
 cout<<"Value of Variable c:\t"<<c <<std::endl;
 cout<<"Value of Variable d:\t"<<d <<std::endl;
 return 0;  
}