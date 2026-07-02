#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> threeSum(vector<int> &v, int t, int n) {
    set<vector<int>> st;
    for(int i = 0; i <= n - 1; i++) {
        for(int j = i + 1; j <= n - 1; j++) {
            for(int k = i + 2; k <= n - 1; k++) {
                if((v[i] + v[j] + v[k]) == t) {
                    vector<int> temp = {v[i], v[j], v[k]};
                    sort(temp.begin(), temp.end());
                    st.insert(temp);
                }
            }
        }
    }
    vector<vector<int>> ans(st.size());
    ans.insert(ans.begin(), st.begin(), st.end());
    return ans;
}
int main()
{
    vector<int> v = {-1,0,1,2,-1,-4};
    int target = 0;
    int n = v.size();
    vector<vector<int>> ans = threeSum(v, target, n);

    for(auto it1 : ans) {
        for(auto it2 : it1) {
            cout << it2 << " ";
        }
    }
    return 0;
}
