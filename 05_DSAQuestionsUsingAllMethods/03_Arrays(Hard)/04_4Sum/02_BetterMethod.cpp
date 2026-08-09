#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> fourSum(vector<int> &v, int n, int t) {
    set<vector<int>> st;
    for(int i = 0; i <= n - 1; i++) {
        for(int j = i + 1; j <= n - 1; j++) {
            set<int> hashset;
            for(int k = i + 2; k <= n - 1; k++) {
                long long l = t - (v[i] + v[j] + v[k]);
                if(hashset.find(l) != hashset.end()) {
                    vector<int> temp = {v[i], v[j], v[k], int(l)};
                    sort(temp.begin(), temp.end());
                    st.insert(temp);
                }
                if(hashset.find(l) == hashset.end()) {
                    hashset.insert(v[k]);
                }
            }
        }
    }
    vector<vector<int>> ans;
    ans.insert(ans.begin(), st.begin(), st.end());
    return ans;
}
int main()
{
    vector<int> v = {1, 0, -1, 0, -2, 2};
    int target = 0;
    int n = v.size();
    fourSum(v, n, target);
    return 0;
}

// Time Complexity - O(n^3 log m) + O(log number of quadriples)
// Space Complexity - O(4) + O(number of quadriples) * 2 {to put st in ans vector} + O(m){size of hashset}