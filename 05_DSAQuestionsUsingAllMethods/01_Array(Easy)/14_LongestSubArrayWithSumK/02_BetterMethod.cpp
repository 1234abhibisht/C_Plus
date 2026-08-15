// this better method is for positive, negative and zeroes elements of array
// we can't further optimise this method

#include <bits/stdc++.h>
using namespace std;
int longestSubArray(vector<int> &arr, int n, long long k)
{
    map<long long, int> mpp;
    mpp[0] = -1;
    int sum = 0, len = 0;
    for (int i = 0; i <= n - 1; i++)
    {
        sum = sum + arr[i];
        int rem = sum - k;
        // first check whether rem key is present in map, if not then put in map
        if (mpp.find(rem) != mpp.end())
        { // find(rem) is not pointing to address next to where map ends,
            // means find(rem) is pointing to address inside the map, means key exists in map
            len = max(len, i - mpp[rem]);
        }
        if (mpp.find(sum) == mpp.end())
        {   // for handling zeroes
            mpp[sum] = i;
        }
    }
    return len;
}
int main()
{
    vector<int> arr = {1, 2, 3, 1, 2};
    int size = arr.size();
    cout << longestSubArray(arr, size, 3);
    return 0;
}
