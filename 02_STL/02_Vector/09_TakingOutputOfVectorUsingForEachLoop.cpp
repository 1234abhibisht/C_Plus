#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> v={1,2,3,4,5};
    for(auto a : v) {
        cout << a   << " ";
    }
    return 0;
}