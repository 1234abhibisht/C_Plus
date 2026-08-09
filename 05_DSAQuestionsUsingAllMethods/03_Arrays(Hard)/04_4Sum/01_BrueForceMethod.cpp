#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> fourSum(vector<int> &v, int n, int t) {
    set<vector<int>> st;
    for(int i = 0; i <= n - 1; i++) {
        for(int j = i + 1; j <= n - 1; j++) {
            for(int k = i + 2; k <= n - 1; k++) {
                for(int l = i + 3; l <= n - 1; l++) {
                    long long sum = v[i] + v[j];
                    sum += v[k];
                    sum += v[l];   // we are not writing all four sum in single line to prevent integer exceed limit
                    if(sum == t) {
                        vector<int> temp = {v[i], v[j], v[k], v[l]};
                        sort(temp.begin(), temp.end());
                        st.insert(temp);
                    }
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

// Time Complexity - O(n^4) + O(log number of quadriples)
// Space Complexity - O(4) + O(number of quadriples)