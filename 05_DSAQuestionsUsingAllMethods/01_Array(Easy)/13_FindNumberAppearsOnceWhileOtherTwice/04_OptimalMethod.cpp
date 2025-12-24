#include <bits/stdc++.h>
using namespace std;
int numAppearsOnce(vector<int> &arr, int n)
{
    int xor1 = 0;
    for (int i = 0; i <= n - 1; i++)
    {
        xor1 = xor1 ^ arr[i];
    }
    return xor1;
}
int main()
{
    vector<int> arr = {1, 1, 2, 3, 3, 4, 4};
    int size = arr.size();
    cout << numAppearsOnce(arr, size);
    return 0;
}