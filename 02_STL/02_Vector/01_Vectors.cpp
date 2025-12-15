#include <iostream>
#include <vector> /* this is required for vector */
using namespace std;
int main()
{
    vector<int> v;  /* currently it is an empty array/vecotor */
    v.push_back(1); /* now v will take 1 as input in it */
    v.push_back(2); /* now it will dynamically extent its size and take 2 as input in it */

    /* we can also use emplace_back in place of push_back, both do same thing */
    return 0;
}