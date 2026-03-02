// given an array of size n, find all elements appears more than n/3 times

// here at ans array, maximum n / 3 elements can appear > n / 3 times and minimum 0 elements can
// appear > n / 3 times

#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {1, 1, 1, 2, 2, 3, 3, 3};
    int n = v.size();
    vector<int> ans;
    for (int i = 0; i <= n - 1; i++)
    {
        int count = 0;
        if (ans.size() == 0 || ans.back() != v[i])
        {
            for (int j = 0; j <= n - 1; j++)
            {
                if (v[i] == v[j])
                {
                    count++;
                }
            }
        }
        if (count > n / 3)
        {
            ans.emplace_back(v[i]);
        }
        if (ans.size() > n / 3)
        {
            break;
        }
    }

    for (auto it : ans)
    {
        cout << it << " ";
    }
    return 0;
}

// Time Complexity = O(n ^ 2)
// Space Complexity = O(1)