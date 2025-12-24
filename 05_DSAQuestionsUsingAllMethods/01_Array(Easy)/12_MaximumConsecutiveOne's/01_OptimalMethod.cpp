#include <bits/stdc++.h>
using namespace std;

int maxConsecutiveOne(vector<int> &arr, int n)
{
    int count = 0, maxOut = 0;
    for (int i = 0; i <= n - 1; i++)
    {
        if (arr[i] == 1)
        {
            count++;
            maxOut = max(count, maxOut);
        }
        else
        {
            count = 0;
        }
    }
    return maxOut;
}
int main()
{
    vector<int> arr = {1, 1, 0, 1, 1, 1, 0, 1, 1};
    int size = arr.size();
    cout << maxConsecutiveOne(arr, size);
    return 0;
}