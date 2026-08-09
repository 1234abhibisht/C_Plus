#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> threeSum(vector<int> &v, int n, int t)
{
    vector<vector<int>> ans;
    sort(v.begin(), v.end());
    for (int i = 0; i <= n - 1; i++)
    {
        if(i >0 && v[i] == v[i - 1]) {
            continue;
        }
        int j = i + 1, k = n - 1;
        while (j < k)
        {
            long sum = v[i] + v[j] + v[k];
            if (sum < 0)
            {
                j++;
            }
            else if (sum > 0)
            {
                k--;
            }
            else
            {
                vector<int> temp = {v[i], v[j], v[k]};
                ans.emplace_back(temp);
                j++;
                k--;
                while (v[j] == v[j - 1] && j < k)
                {
                    j++;
                }
                while (v[k] == v[k + 1] && k > j)
                {
                    k--;
                }
            }
        }
    }
}
int main()
{
    vector<int> v = {-1, 0, 1, 2, -1, -4};
    int n = v.size();
    int target = 0;
    threeSum(v, n, target);
    return 0;
}

// Time Complexity - O(nlogn){sorting} + O(n^2)
// Space Complexity - O(number of triplets){for ans vector} + O(3){for temp vector}