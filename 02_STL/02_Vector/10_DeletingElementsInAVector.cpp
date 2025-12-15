#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> v={1,2,3,4,5};
    v.erase(v.begin()+1, v.begin()+4);
    for(auto a=v.begin(); a!=v.end(); a++) {   /* or for(auto a : v) */
        cout << *(a) << " ";
    }
    return 0;
}