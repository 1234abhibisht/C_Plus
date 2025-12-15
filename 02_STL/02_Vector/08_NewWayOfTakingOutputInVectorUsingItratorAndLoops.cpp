/* instead of doing for(vector<int>::itrator a=v.begin; a!=end(); a++) */
#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> v={1,2,3,4,5};
    for(auto a=v.begin(); a!=v.end(); a++)  /* we do not need to define itrator auto will automatically assign it */
    /* auto means auto assignation */
    cout << *(a) << " ";
    return 0;
}