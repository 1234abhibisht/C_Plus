#include <bits/stdc++.h>
using namespace std;
int maxSubarraySum(vector<int> &arr, int n)
{
    int sum = 0, maximum = INT_MIN;
    for (int i = 0; i <= n - 1; i++)
    {
        sum += arr[i];
        if (sum < 0)
        {
            sum = 0;
        }
        maximum = max(maximum, sum);
    }
    if (maximum < 0)
    {
        maximum = 0;
    }
    return maximum;
}
int main()
{
    vector<int> arr = {-2, -3, 4, -1, -2, 1, 5, -3};
    int size = arr.size();
    cout << maxSubarraySum(arr, size);
    return 0;
}

// time complexity = O(n)
// space complexity = O(1)