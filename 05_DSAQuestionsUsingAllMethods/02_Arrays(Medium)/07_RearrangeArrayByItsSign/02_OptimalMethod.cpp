#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {3, 1, -2, -5, 2, -4};
    int n = v.size();
    vector<int> ans(n);
    int pos = 0;
    int neg = 1;
    for(int i = 0; i <= n - 1; i++) {
        if(v[i] > 0) {
            ans[pos] = v[i];
            pos += 2;
        }
        else {
            ans[neg] = v[i];
            neg += 2;
        }
    }
    for(auto it : ans) {
        cout << it << " ";
    }
    return 0;
}

// Time Complexity = O(n)
// Space Complexity = O(n)