#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {1, 1, 1, 2, 2, 3, 3, 3};
    int n = v.size();
    vector<int> ans;
    map<int, int> mpp;
    for (int i = 0; i <= n - 1; i++)
    {
        mpp[v[i]]++;
    }
    for (auto it : mpp)
    {
        if (it.second > n / 3)
        {
            ans.emplace_back(it.first);
        }
    }

    for (auto lt : ans)
    {
        cout << lt << " ";
    }
    return 0;
}

// Time Complexity = O(n logm)
// Space Complexity = O(n)