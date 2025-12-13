#include <iostream>
using namespace std;
int main() {
    string s="Abhi";
    s[0]='C';
    cout << s[0] << endl;
    cout << s[3] << endl;
    s[3]='l';
    cout << s[3];
    return 0;
}