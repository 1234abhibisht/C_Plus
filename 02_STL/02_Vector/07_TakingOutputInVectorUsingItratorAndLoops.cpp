/* for ex we have 1,2,3,4,5 in a vector and we have to print all of these in one go */

#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> v={1,2,3,4,5};
    for(vector<int>::iterator a=v.begin(); a!=v.end(); a++) {
        cout << *(a) << " ";
    }
    return 0;
}