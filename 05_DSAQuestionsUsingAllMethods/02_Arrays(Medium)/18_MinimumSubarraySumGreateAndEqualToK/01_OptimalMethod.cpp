// we are given array of positive integers
// find minimum subarray length whose element sum is >= sum

#include <bits/stdc++.h>
using namespace std;
int minimumSubArraySum(vector<int> &arr, int target) {
    int sum = arr[0];
    int len = INT_MAX;
    int i = 0, j = 0;
    while(j <= arr.size() - 1) {
        while(sum >= target && i <= j) {
            len = min(len, j - i + 1);
            sum -= arr[i];
            i++;
        }
        j++;
        if(j <= arr.size() - 1) {
            sum += arr[j];
        }
    }
    return len;
}
int main()
{
    vector<int> arr = {2,3,1,2,4,3};
    cout << minimumSubArraySum(arr, 7);
    return 0;
}