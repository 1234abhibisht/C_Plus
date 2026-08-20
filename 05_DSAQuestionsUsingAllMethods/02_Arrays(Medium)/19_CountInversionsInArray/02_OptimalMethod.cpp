// we have to count pairs in a array in which left element is > right element
// Ex - [5,3,2,4,1] 
// pairs = (5,3),(5,4),(5,1),(3,2),(3,1),(2,1),(4,1)
// Note -> (4,2) will not count, as in array 4 is in right of 2

#include <bits/stdc++.h>
using namespace std;
int merge(vector<int> &arr, int low, int high, int mid) {
    int cnt = 0;
    vector<int> ans;
    int left = low, right = mid + 1;
    while(left <= mid && right <= high) {
        if(arr[left] <= arr[right]) {
            ans.emplace_back(arr[left]);
            left++;
        }
        else {
            ans.emplace_back(arr[right]);
            cnt += (mid - left + 1);
            right++;
        }
    }
    while(left <= mid) {
        ans.emplace_back(arr[left]);
        left++;
    }
    while(right <= high) {
        ans.emplace_back(arr[right]);
        right++;
    }
    // arr.insert(arr.begin(), ans.begin(), ans.end());
    for(int i = low; i <= high; i++) {
        arr[i] = ans[i - low];
    }
    return cnt;
}
int divide(vector<int> &arr, int low, int high) {
    int cnt = 0;
    if(low == high) {
        return cnt;
    }
    int mid = (low + high) / 2;
    cnt += divide(arr, low, mid);
    cnt += divide(arr, mid + 1, high);
    cnt += merge(arr, low, high, mid);
    return cnt;
}
int countInversions(vector<int> &arr, int low, int high) {
    int cnt = 0;
    cnt = divide(arr, low, high);
    return cnt;
}
int main()
{
    vector<int> arr = {5,3,2,4,1};
    cout << countInversions(arr, 0, arr.size() - 1);
    return 0;
}

// Time Complexity - O(n logn)
// Space Complexity - O(n)