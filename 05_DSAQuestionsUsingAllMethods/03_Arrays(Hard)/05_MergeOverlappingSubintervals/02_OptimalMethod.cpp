#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> mergeOverlapping(vector<vector<int>> &arr) {
    vector<vector<int>> ans;
    sort(arr.begin(), arr.end());
    ans.emplace_back(arr[0]);
    for(int i = 0; i <= arr.size() - 1; i++) {
        // int start = arr[i][0];
        // int end = arr[i][1];
        if(ans.empty() || arr[i][0] > ans.back()[1]) {
            ans.emplace_back(arr[i]);
        }
        else if(arr[i][0] <= ans.back()[1]) {
            ans.back()[1] = max(arr[i][1], ans.back()[1]);
        }
    }
    return ans;
}
int main()
{
    vector<vector<int>> arr = {{1,3},{2,6},{8,9},{9,11},{8,10},{2,4},{15,18},{16,17}};
    mergeOverlapping(arr);
    return 0;
}

// Time Complexity - O(n)
// Space Complexity - O(n)