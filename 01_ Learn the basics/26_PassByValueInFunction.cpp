/* if we have created a variable in memory and we have assigned a value (10) to that variable.
if we pass the value (10) to another function the copy of that value will be passes.
the original vlaue will remain stored in the memory and whatever modfications we will
do in function, it will happen in the copy not in original value */

#include <iostream>
using namespace std;
void value(int x) {
    cout << x << endl;
    x+=5;
    cout << x << endl;
    x+=5;
    cout << x << endl;
}
int main() {
    int x=10;
    value(x);
    cout << x;
    return 0;
}