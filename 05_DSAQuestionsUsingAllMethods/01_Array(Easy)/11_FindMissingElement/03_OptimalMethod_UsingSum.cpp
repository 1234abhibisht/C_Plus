// elements are from 1 to n

#include <bits/stdc++.h>
using namespace std;
int missingElement(vector<int> &arr, int n)
{
    int miss = 0;
    int sum1 = (n * (n + 1)) / 2;
    int sum2 = 0;
    for (int i = 0; i <= n - 2; i++)
    {
        sum2 = sum2 + arr[i];
    }
    miss = sum1 - sum2;
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