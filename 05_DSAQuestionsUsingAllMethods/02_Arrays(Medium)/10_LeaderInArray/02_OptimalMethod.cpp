#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {10, 22, 12, 3, 0, 6};
    int n = v.size();
    int max = INT_MIN;
    vector<int> ans;
    for (int i = n - 1; i >= 0; i--)
    {
        if (v[i] > max)
        {
            max = v[i];
            ans.emplace_back(v[i]);
        }
    }
    for (auto it : ans)
    {
        cout << it << " ";
    }
    return 0;
}

// If question asked for leaders in sorted order, then at last sort the array using quick or merge sort

// Time Complexity = O(n)
// Space Complexity = O(n)
