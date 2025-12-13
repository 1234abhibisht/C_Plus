/* if we want to change or do modifications in original value not copy of it,
as that happens in pass by value, which is stored in memory, 
when we pass it to a function,  this is where we use pass by reference.
it pass the address of the original value stored */ 

#include <iostream>
using namespace std;
void reference(int &x) {  /* to do pass by reference we add & before variable that is passed */
    cout << x << endl;
    x=x+5;
    cout << x << endl;
}
int main() {
    int x=10;
    reference(x);
    cout << x;
    return 0;
}