// using Moore's Voting algorithm

#include <bits/stdc++.h>
using namespace std;
int majorityElement(vector<int> arr, int n)
{
    int check = n / 2;
    int count = 0, ele = INT_MIN;
    for (int i = 0; i <= n - 1; i++)
    {
        if (count == 0)
        {
            ele = arr[i];
            count = 1;
        }
        else if (arr[i] == ele)
        {
            count++;
        }
        else
        { // arr[i] != ele
            count--;
        }
    }

    int count2 = 0;
    for (int i = 0; i <= n - 1; i++)
    {
        if (arr[i] == ele)
        {
            count2++;
        }
    }
    if (count2 > check)
    {
        return ele;
    }
    return -1;
}
int main()
{
    vector<int> arr = {7, 7, 5, 7, 5, 1, 5, 7, 5, 5, 7, 7, 5, 5, 5, 5};
    int size = arr.size();
    cout << majorityElement(arr, size);
    return 0;
}