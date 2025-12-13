/* School has grading system as 
 80-100 = A
 60 to 79 = B
 50 to 59 = C
 45 to 49 = D
 Below 45 = F */

#include <iostream>
using namespace std;
int main() {
    float x;
    cout << "Enter your percentage : ";
    cin >> x;
    if(x>=80) cout << "A grade";
    else if(x>=60 && x<=79) cout << "B grade";
    else if(x>=50 && x<=59) cout << "C grade";
    else if(x>=45 && x<=49) cout << "D grade";
    else if(x<45) cout << "F grade";
    return 0;
}