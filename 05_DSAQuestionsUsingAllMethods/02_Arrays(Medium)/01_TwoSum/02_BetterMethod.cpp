// return indexes of numbers having sum equal to target

#include <bits/stdc++.h>
using namespace std;
vector<int> twoSum(vector<int> arr, int n, int target)
{
    map<int, int> mpp;
    for (int i = 0; i <= n - 1; i++)
    {
        int rem = target - arr[i];
        if (mpp.find(rem) != mpp.end())
        {
            return {mpp[rem], i};
        }
        mpp[arr[i]] = i;
    }
    return {0, 0};
}
int main()
{
    vector<int> arr = {2, 6, 5, 8, 1};
    int size = arr.size();
    for (auto it : twoSum(arr, size, 14))
    {
        cout << it << " ";
    }
    return 0;
}