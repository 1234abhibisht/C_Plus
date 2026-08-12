#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> mergeOverlapping(vector<vector<int>> &arr) {
    vector<vector<int>> ans;
    sort(arr.begin(), arr.end());
    for(int i = 1; i <= arr.size() - 1; i++) {
        int start = arr[i][0];
        int end = arr[i][1];
        if(!ans.empty() && end <= ans.back()[1]) {
            continue;
        }
        for(int j = i + 1; j <= arr.size() - 1; j++) {
            if(arr[j][0] <= end) {
                end = max(end, arr[j][1]);
            }
            else {
                break;
            }
        }
        vector<int> temp = {start, end};
        ans.emplace_back(temp);
    }
    return ans;
}
int main()
{
    vector<vector<int>> arr = {{1,3},{2,6},{8,9},{9,11},{8,10},{2,4},{15,18},{16,17}};
    mergeOverlapping(arr);
    return 0;
}

// Time Complexity - O(n logn){sorting} + O(2n){for both nested loops it will not O(n^2) as we are using break and continue}
// Space Complexity - O(n)