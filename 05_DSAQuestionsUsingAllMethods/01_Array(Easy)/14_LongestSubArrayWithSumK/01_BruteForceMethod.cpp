#include <bits/stdc++.h>
using namespace std;
int longestSubArray(vector<int> &arr, int n, int k)
{
    int len = 0;
    for (int i = 0; i <= n - 1; i++)
    {
        int sum = 0;
        for (int j = i; j <= n - 1; j++)
        {
            sum = sum + arr[j];
            if (sum == k)
            {
                len = max(len, j - i + 1);
            }
        }
    }
    return len;
}
int main()
{
    vector<int> arr = {1, 2, 3, 1, 1, 1, 1, 4, 2, 3};
    int size = arr.size();
    cout << longestSubArray(arr, size, 3);
    return 0;
}

// time complexity = O(n^2)
// space complexity = O(1);