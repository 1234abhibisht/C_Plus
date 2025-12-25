// this optimal method is only for positive and zeroes elements of array

#include <bits/stdc++.h>
using namespace std;
int longestSubArray(vector<int> &arr, int n, long long k)
{
    int i = 0, j = 0, len = 0;
    long long sum = arr[0];
    while (j <= n - 1)
    {
        while (sum > k && i <= j)
        {
            sum = sum - arr[i];
            i++;
        }
        if (sum == k)
        {
            len = max(len, j - i + 1);
        }
        j++;
        if (j <= n - 1)
        {
            sum = sum + arr[j];
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

// time complexity = O(2n), T.C is not O(n^2), as outer is going n times but inner loop is not 
// going n times everytime for each itration of outer loop
// inner loop will run only if sum > k && i <= j

// space complexity = O(1)