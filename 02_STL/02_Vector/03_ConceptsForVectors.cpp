#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> v(5,100);  /* it will create a container of space 5 and 100 elements in each 
    {100,100,100,100, 100} */
    vector<int> v1(5);  /* it will create a container of space 5 having 0 in each {0,0,0,0,0} */
    /* if we want to copy v vector to another v2 vector */
    vector<int> v2(v); /* v2 = v{100,100,100,100,100} */
    v2.push_back(1);  /* now it will add a container in v2 having entry 1 {100,100,100,100,100,1} */
    return 0;
}