#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> v={2,3,4,5,6};
    vector<int>::iterator a=v.begin();  /* begin will find the adress of first container of vector in memory. 
    it will not access element, just find first container in memory address */
    cout << *(a) << " ";  /* * will access the element in the container which v.begin() has found */
    a++;  /* if will shift to another container next to first container found by v.begin() */
    cout << *(a) << " ";
    a+=2;  /* now it will shift 2 more container i.e. 4th container */
    cout << *(a);
    return 0;
}