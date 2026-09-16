#include <bits/stdc++.h>
using namespace std;
int maxSubarrayProduct(vector<int> &arr, int n) {
    int maxProd = INT_MIN;
    int prefix_prod = 1, suffix_prod = 1;
    for(int i = 0; i <= n - 1; i++) {
        if(prefix_prod == 0) {
                prefix_prod = 1;
            }
            if(suffix_prod == 0) {
                suffix_prod = 1;
        }
        prefix_prod = prefix_prod * arr[i];
        suffix_prod = suffix_prod * arr[n - i - 1];
        maxProd = max(maxProd, max(prefix_prod, suffix_prod));
    }
    return maxProd;
}
int main()
{
    vector<int> arr = {2,3,-2,4};
    int n = arr.size();
    cout << maxSubarrayProduct(arr, n);
    return 0;
}

// Time Complexity = O(n)
// Space Complexity = O(1)