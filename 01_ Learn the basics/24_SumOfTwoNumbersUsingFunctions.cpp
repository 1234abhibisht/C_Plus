#include <iostream>
using namespace std;
int sum(int a, int b) {
    int z=a+b;
    cout << "Sum of " << a << " and " << b <<" is " << z;
    return z;
}
int main() {
    int a, b;
    cout << "Enter two numbers : ";
    cin >> a >> b;
    sum(a,b);
    return 0;
}