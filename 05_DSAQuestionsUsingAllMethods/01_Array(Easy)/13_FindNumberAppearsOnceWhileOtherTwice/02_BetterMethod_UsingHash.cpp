#include <bits/stdc++.h>
using namespace std;
int numAppearsOnce(vector<int> &arr, int n)
{
    int maxEle = 0;
    for (int i = 0; i <= n - 1; i++)
    {
        maxEle = max(maxEle, arr[i]);
    }
    int once = 0;
    vector<int> hash(maxEle + 1);
    for (int i = 0; i <= n - 1; i++)
    {
        hash[arr[i]]++;
    }
    for (int i = 1; i <= maxEle; i++)
    {
        if (hash[i] == 1)
        {
            once = i;
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

// time complexity = O(3n);
// space complexity = O(maxEle), we have taken an extra hash array having size of maximum element 
// of arr array 