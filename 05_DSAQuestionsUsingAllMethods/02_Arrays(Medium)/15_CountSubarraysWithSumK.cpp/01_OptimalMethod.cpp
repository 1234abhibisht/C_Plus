#include <bits/stdc++.h>
using namespace std;
int countSubarraysWithSumK(vector<int>& nums, int k) {
        unordered_map<int,int> mpp;
        mpp[0] = 1;
        int count = 0, sum = 0;
        for(int i = 0; i <= nums.size() - 1; i++) {
            sum += nums[i];
            int rem = sum - k;
            count += mpp[rem];
            mpp[sum]++;
        }
        return count;
    }
int main()
{
    vector<int> arr = {1,2,1,2,1};
    countSubarraysWithSumK(arr, 3);
    return 0;
}

// Time Complexity - if normal map is used -> O(n logm)
//                   if unordered map is used -> best case - O(n), worst case - O(n * n)

// Space Complexity - O(m)