// elements are from 1 to n

#include <bits/stdc++.h>
using namespace std;
int missingElement(vector<int> &arr, int n)
{
    int miss = 0;
    int xor1 = 0;
    int xor2 = 0;
    for (int i = 0; i <= n - 2; i++)
    {
        xor2 = xor2 ^ arr[i];
        xor1 = xor1 ^ (i + 1);
    }
    xor1 = xor1 ^ n;
    miss = xor1 ^ xor2;
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

// time complexity = O(n - 1) = O(n)
