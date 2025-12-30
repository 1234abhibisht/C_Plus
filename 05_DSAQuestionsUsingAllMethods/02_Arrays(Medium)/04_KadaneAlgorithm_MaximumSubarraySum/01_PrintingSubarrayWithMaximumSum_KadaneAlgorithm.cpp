#include <bits/stdc++.h>
using namespace std;
void maxSubarraySum(vector<int> &arr, int n)
{
    int sum = 0, maximum = INT_MIN;
    int start = -1;
    int ansStart = -1, ansEnd = -1;
    for (int i = 0; i <= n - 1; i++)
    {
        sum += arr[i];
        if (sum < 0)
        {
            sum = 0;
        }
        if (sum == 0)
        {
            start = i;
        }
        if (sum > maximum)
        {
            maximum = sum;
            ansStart = start;
            ansEnd = i;
        }
    }
    for (int i = ansStart; i <= ansEnd; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    vector<int> arr = {-2, -3, 4, -1, -2, 1, 5, -3};
    int size = arr.size();
    maxSubarraySum(arr, size);
    return 0;
}

// time complexity = O(n)
// space complexity = O(1)