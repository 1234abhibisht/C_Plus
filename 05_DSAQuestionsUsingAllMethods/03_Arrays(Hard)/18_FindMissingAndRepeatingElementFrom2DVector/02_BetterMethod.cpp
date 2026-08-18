#include <bits/stdc++.h>
using namespace std;
vector<int> missingRepeating(vector<vector<int>> arr) {
    int n = arr[0].size();
    int missing, repeating = 0;
    vector<int> hashVector((n * n) + 1);
    for(int i = 0; i <= n - 1; i++) {
        for(int j = 0; j <= n - 1; j++) {
            hashVector[arr[i][j]]++;
        }
    }
    for(int i = 0; i <= n * n; i++) {
        if(hashVector[i] > 1) {
            repeating = i;
        }
        else if(hashVector[i] == 0) {
            missing = i;
        }
        if(missing > 0 && repeating > 0) {  // if we get repeating and missing element in first two position
            break;
        }
    }
    return {repeating, missing};
}
int main()
{
    vector<vector<int>> arr = {{9,1,7},{8,9,2},{3,4,6}};
    for(auto it : missingRepeating(arr)) {
        cout << it << " ";
    }
    return 0;
}

// Time Complexity - O(n ^ 2) + O(n){in worst case where we have to iterate hashVector till end}
// Space Complexity - O(n*n){size of arr}