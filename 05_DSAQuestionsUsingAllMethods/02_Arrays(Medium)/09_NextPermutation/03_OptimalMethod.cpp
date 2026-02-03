#include <bits/stdc++.h>
using namespace std;
vector<int> nextPermutation(vector<int> &v, int n) {

    // using largest prefix, find break or dip point
    int idx = -1;
    for(int i = n - 2; i >= 0; i--) {
        if(v[i] < v[i + 1]) {
            idx = i;
            break;
        }
    }
    if(idx == -1) {  // no dip found, means array is last permutation, so reverse that array
        reverse(v.begin(), v.end());
        return v;
    }

    // find a number just greater than dip element
    for(int i = n - 1; i >= idx + 1; i--) {
        if(v[i] > v[idx]) {
            swap(v[i], v[idx]);
            break;
        }
    }

    // now reverse remaining part
    reverse(v.begin() + idx + 1, v.end());
    return v;
}
int main()
{
    vector<int> v = {2,1,5,4,3,0,0};
    int n = v.size();
    nextPermutation(v, n);
    for(auto it : v) {
        cout << it << " ";
    }
    return 0;
}