/* take the day no and print the corresponding day
for 1 print Monday
for 2 print Tuesday and so on print 7 for sunday */

#include <iostream>
using namespace std;
int main() {
    int x;
    cout << "Enter day number : ";
    cin >> x;
    switch(x) {    /* here x is a variable where 1 2 3 4 of cases will be stored*/
        case 1: cout << "Monday";   
            break;
        case 2: cout << "Tuesday";   
            break;
        case 3: cout << "Wednesday";
            break;
        case 4: cout << "Thrusday";
            break;
        case 5: cout << "Friday";
            break;
        case 6: cout  << "Saturday";
            break;
        case 7: cout << "Sunday";
        break;
        default: cout << "Invalid";
        break;
    }
    return 0;   
}