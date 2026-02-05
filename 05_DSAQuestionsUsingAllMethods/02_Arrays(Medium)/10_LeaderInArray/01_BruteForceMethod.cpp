#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {10, 22, 12, 3, 0, 6};
    int n = v.size();
    vector<int> ans;
    for (int i = 0; i <= n - 1; i++)
    {
        bool flag = true;
        for (int j = i + 1; j <= n - 1; j++)
        {
            if (v[j] > v[i])
            {
                flag = false;
                break;
            }
        }
        if (flag == true)
        {
            ans.emplace_back(v[i]);
        }
    }
    for (auto it : ans)
    {
        cout << it << " ";
    }
    return 0;
}

// Time Complexity = O(n^2)
// Space Complexity = O(n)
