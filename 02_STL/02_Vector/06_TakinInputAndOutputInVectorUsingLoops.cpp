/* it is same as we do for arrays */

#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n;
    cout << "Enter number of containers you want : ";
    cin >> n;
    vector<int> v(n);
    cout << "Enter elements : ";
    for(int i=0; i<=n-1; i++) {
        cin >> v[i];
    }
    /* output using loop */
    for(int i=0; i<=n-1; i++) {
        cout << v[i] << " ";
    }
    /* updating containers */
    v.push_back(5);
    return 0;
}