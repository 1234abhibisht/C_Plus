// elements are from 1 to n

#include <bits/stdc++.h>
using namespace std;
int missingElement(vector<int> &arr, int n)
{
    vector<int> hash(n + 1);
    int miss = 0;
    for (int i = 0; i <= n - 2; i++)
    {
        hash[arr[i]]++;
    }
    for (int i = 1; i <= n; i++)
    {
        if (hash[i] == 0)
        {
            miss = i;
        }
    }
    return miss;
}
int main()
{
    vector<int> arr = {1, 2, 3, 5};
    int n = 5;
    int size = arr.size();
    cout << missingElement(arr, n);
    return 0;
}

// time complexity = O(n + n - 1) = O(2n - 1) = O(2n)
// space complexity = 0(n + 1) = O(n), we took an extra hash array of size n + 1