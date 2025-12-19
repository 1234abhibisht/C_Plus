#include <bits/stdc++.h>
using namespace std;
vector<int> zeroesEnd(vector<int> &arr, int n)
{
    vector<int> temp;
    // store all non zero elements to temp array
    for (int i = 0; i <= n - 1; i++)
    {
        if (arr[i] != 0)
        {
            temp.emplace_back(arr[i]);
        }
    }

    // now put all non zero elements back from temp array to arr, replacing zeros
    int idx = 0;
    for (int i = 0; i <= temp.size(); i++)
    {
        arr[i] = temp[idx];
        idx++;
    }

    // now replace last elements with zero
    for (int i = idx; i <= n - 1; i++)
    {
        arr[i] = 0;
    }
    return arr;
}
int main()
{
    vector<int> arr = {1, 0, 3, 0, 0, 4, 5};
    int size = arr.size();
    zeroesEnd(arr, size);
    for (int i = 0; i <= size - 1; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}

// time complexity = O(n) + O(n) + O(n - n) = O(2n)
// space complexity = we have taken an extra array that contains all non zero elements
// S.C = On)