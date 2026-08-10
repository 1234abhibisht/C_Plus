#include <bits/stdc++.h>
using namespace std;
int countSubarraysWithXorAsK(vector<int> &arr, int k) {
    int count = 0, Xor = 0;
    map<int,int> mpp;
    mpp[0] = 1;
    for(int i = 0; i <= arr.size() - 1; i++) {
        Xor = Xor ^ arr[i];
        int x = Xor ^ k;
        if(mpp.find(x) != mpp.end()) {
            count += mpp[x];
        }
        mpp[Xor]++;
    }
    return count;
}
int main()
{
    vector<int> arr = {4,2,2,6,4};
    cout << countSubarraysWithXorAsK(arr, 6);
    return 0;
}

// Time Complexity - if normal map is used -> O(n logm)
//                   if unordered map is used -> best case - O(n), worst case - O(n * n)

// Space Complexity - O(m)