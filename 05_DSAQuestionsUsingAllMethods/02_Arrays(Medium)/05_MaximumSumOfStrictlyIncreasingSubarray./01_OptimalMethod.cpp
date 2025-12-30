// given an array of positive elements, find maximum sum of strictly increasing subarray

#include <bits/stdc++.h>
using namespace std;
int maxSubarraySum(vector<int> &arr, int n)
{
    int sum = arr[0], maximum = arr[0];
    for (int i = 1; i <= n - 1; i++)
    {
        if (arr[i] > arr[i - 1])
        {
            sum += arr[i];
        }
        else
        {
            sum = arr[i];
        }
        maximum = max(maximum, sum);
    }
    return maximum;
}
int main()
{
    vector<int> arr = {10, 20, 30, 5, 10, 50};
    int size = arr.size();
    cout << maxSubarraySum(arr, size);
    return 0;
}