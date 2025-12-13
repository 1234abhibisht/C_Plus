#include <iostream>
using namespace std;
void hello(string name) {
    cout << "Hello " << name << endl;
}
int main() {
    string name;
    cin >> name;
    hello(name);
    string name2;
    cin >> name2;
    hello(name2);
    return 0;
}