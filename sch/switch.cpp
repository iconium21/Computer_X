#include <iostream>
using namespace std;
int main() {
    cout << "==C++ Switch v1\n";
    int day;
    cout << "Enter day:  ";
    cin >> day;
    switch (day) {
    case 1:
     cout << "\n Monday.\n";
     break;
    case 2:
      cout << "\n Tuesday.\n";
     break;
    case 3:
      cout << "\n Wednesday.\n";
     break;
    case 4:
      cout << "\n Thursday.\n";
     break;
    case 5:
      cout << "\n Friday. \n"; // fixed. forgot to add break.
      break;
    case 6:
      cout << "\n Saturday. \n";
      break;
    case 7:
      cout << "\n Sunday. \n";
      break;
    default:
      cout << "nah";
    }
    return 0;
}