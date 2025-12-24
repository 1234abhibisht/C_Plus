#include <bits/stdc++.h>
using namespace std;
int numAppearsOnce(vector<int> &arr, int n)
{
    int maxEle = 0;
    int once = 0;
    map<int, int> mpp;
    for (int i = 0; i <= n - 1; i++)
    {
        mpp[arr[i]]++;
    }
    for (auto it : mpp)
    {
        if (it.second == 1)
        {
            once = it.first;
        }
    }
    return once;
}
int main()
{
    vector<int> arr = {1, 1, 2, 3, 3, 4, 4};
    int size = arr.size();
    cout << numAppearsOnce(arr, size);
    return 0;
}

// time complexity = O(n logm), where n is size of array and m is size of map
// space complexity = O(maxEle), we have taken a map, which contains key upto maximum element of 
// arr array