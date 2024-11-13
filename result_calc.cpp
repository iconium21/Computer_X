#include <cmath>
#include <cstdlib>
#include <iostream>
#include <ostream>
using namespace std;
int main() {
    cout << "==Perc Calc v2.1\n";
    float eng,math,phy,chem,comp,pst,sindhi; // Subjects 
    float total_obt,perc;
    cout << "Enter Your Marks:\n";
    cout << "Maths: ";
    cin  >> math;
    cout << "\nEnglish: ";
    cin >> eng;
    cout << "\nPhysics: ";
    cin >> phy;
    cout << "\nChemistry: ";
    cin >> chem;
    cout << "\nComputer: ";
    cin >> comp;
    cout << "\n PST: ";
    cin >> pst;
    cout << "\n Sindhi: ";
    cin >> sindhi;
    
    // Calculate Total and Perc.
    total_obt = eng+math+phy+chem+comp+pst+sindhi;
    perc  = (total_obt/700)*100; // Assuming that each subject is of 100 marks.

    cout << "Total Marks: " << total_obt << endl;
    cout << "Percentage: " << perc << endl;
   // Grading:
    if (perc<=100 && perc>=90 ) {
        cout << "Grade: A+\n";
    }
    else if (perc<=80 && perc>=70) {
        cout << "Grade: A\n";
    }
    else if (perc<=70 && perc>=60) {
        cout << "Grade: B\n";
    }
    else if (perc <=60 && perc>=50) {
        cout << "Grade: C\n";
    }
    else if (perc <=50 && perc>=40) {
        cout << "Grade: D\n";
    }
    else if (perc <40 && perc>0) {
        cout << "Grade: FAIL!\n";
    }
    else {
     
    }
    return 0;
}