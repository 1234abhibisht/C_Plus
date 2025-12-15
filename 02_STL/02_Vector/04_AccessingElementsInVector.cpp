#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> v={1,2,3,4,5};
    cout << v[0] << " " << v[1] << endl;
    v.emplace_back(6);  /* or v.push_back */
    cout << v[5];
    return 0;
}