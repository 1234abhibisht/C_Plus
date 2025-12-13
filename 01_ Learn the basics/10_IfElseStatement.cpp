/* write a program that takes an input of age
 and prints if you are adult or not */

#include <iostream>
using namespace std;
int main() {
    int x;
    cout << "Enter your age : ";
    cin >> x;
    if(x<=18) cout << "You are not an adult";
    else cout << "You are an adult";
    return 0;
}