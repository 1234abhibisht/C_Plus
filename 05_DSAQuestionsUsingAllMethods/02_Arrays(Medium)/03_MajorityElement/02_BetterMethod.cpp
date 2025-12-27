#include <bits/stdc++.h>
using namespace std;
int majorityElement(vector<int> arr, int n)
{
    map<int, int> mpp;
    int check = n / 2;
    for (int i = 0; i <= n - 1; i++)
    {
        mpp[arr[i]]++;
    }
    for (auto it : mpp)
    {
        if (it.second > check)
        {
            return it.first;
        }
    }
    return -1;
}
int main()
{
    vector<int> arr = {2, 3, 3, 3, 1, 2, 2};
    int size = arr.size();
    cout << majorityElement(arr, size);
    return 0;
}