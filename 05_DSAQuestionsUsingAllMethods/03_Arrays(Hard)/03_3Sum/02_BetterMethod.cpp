#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> threeSum(vector<int> &v, int n, int t) {
    set<vector<int>> st;
    for(int i = 0; i <= n - 1; i++) {
        for(int j = i + 1; j <= n - 1; j++) {
            set<int> hashset;
            int k = t - (v[i] + v[j]);
            if(hashset.find(k) != hashset.end()) {
                vector<int> temp = {v[i], v[j], k};
                sort(temp.begin(), temp.end());
                st.insert(temp);
            }
            else if(hashset.find(k) == hashset.end()) {
                hashset.insert(v[j]);
            }
        }
    }
    vector<vector<int>> ans;
    ans.insert(ans.begin(), st.begin(), st.end());
    return ans;
}
int main()
{
    vector<int> v = {-1, 0, 1, 2, -1, -4};
    int n = v.size();
    int target = 0;
    threeSum(v, n, target);
    return 0;
}

// Time Complexity - O(n^2 logm) + O(log number of triplets)
// Space Complexity - O(3){temp vector} + O(number of triplets) * 2 {to put st in ans vector} + O(m){hashset}