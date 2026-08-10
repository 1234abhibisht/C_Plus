#include <bits/stdc++.h>
using namespace std;
int countSubarraysWithXorAsK(vector<int> &arr, int k) {
    int count = 0;
    for(int i = 0; i <= arr.size() - 1; i++) {
        int Xor = 0;  // as xor of any number with 0 is the numbr itself
        for(int j = i; j <= arr.size() - 1; j++) {
            if(Xor ^ arr[j] == k) {
                count++;
            }
        }
    }
    return count;
}
int main()
{
    vector<int> arr = {4,2,2,6,4};
    cout << countSubarraysWithXorAsK(arr, 6);
    return 0;
}

// Time Complexity - O(n^2)
// Space Complexity - O(1)