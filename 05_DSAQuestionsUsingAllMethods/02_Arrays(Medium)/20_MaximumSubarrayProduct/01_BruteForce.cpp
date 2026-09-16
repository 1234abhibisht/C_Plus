#include <bits/stdc++.h>
using namespace std;
int maxSubarrayProduct(vector<int> &arr, int n) {
    int maxPro = INT_MIN;
    for(int i = 0; i <= n - 1; i++) {
        int product = 1;
        for(int j = i; j <= n - 1; j++) {
            product = product * arr[j];
            maxPro = max(maxPro, product);
        }
    }
    return maxPro;
}
int main()
{
    vector<int> arr = {2,3,-2,4};
    int n = arr.size();
    cout << maxSubarrayProduct(arr, n);
    return 0;
}

// Time Complexity = O(n^2)
// Space Complexity = O(1)