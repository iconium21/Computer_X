#include <iostream>
using namespace std;
int main()
{
    program_start:
    for (int i = 1; i > 0;i++){
       cout<<"oi oi oi";
       goto program_start;
    }
    return 0;
}