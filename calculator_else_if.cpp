#include <iostream>
#include <scoped_allocator>
#include <thread>
using namespace std;
int main() {
    cout << "==CPP Calc v2.3\n";
    float x,y;
    char oprt;
    start:
    cout << "Enter Number x: ";
    cin >> x;
    cout << "\n Enter Number y: ";
    cin >> y;
    cout << "\n Enter Operator [1= divide, 2= multiply, 3= add, 4= minus]: \t";
    cin >> oprt;
    if ((x==0 && oprt == '1')|| (y==0 && oprt=='1')) {
        cerr << "\n ERROR: Division by Zero is not possible! Try again.\n";
        goto start;
    } 
    if (oprt=='1') {
        cout << x/y << endl;
        return 0;
    }
    else if (oprt=='2') {
        cout << x*y <<endl;
        return 0;
    }
    else if (oprt=='3') {
        cout <<x+y << endl;
        return 0;
    }
    else if (oprt=='4') {
        cout << x-y << endl;
        return 0;
    }
    else {
        cerr << "Invalid Operator!";
        return 1;
    }
    return 0;
}