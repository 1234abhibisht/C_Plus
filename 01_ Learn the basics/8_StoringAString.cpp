// In a String we can store a sentence taken from user
#include <iostream>
using namespace std;
int main() {
    string s1;
    cout << "Enter string s1 : ";
    cin >> s1;
    cout << s1;
    /* Now there is a problem in this. If we write a sentence it will print only first word of sentence but not print after space
     To fix this */
    string s2;
    cout << "Enter string s2 : ";
    getline(cin, s2);
    cout << s2;
    return 0;
}