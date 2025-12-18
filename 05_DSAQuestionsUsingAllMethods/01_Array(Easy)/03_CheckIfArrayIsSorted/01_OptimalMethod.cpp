#include <bits/stdc++.h>
using namespace std;
void checkSort(vector<int> &arr)
{
    int size = arr.size();

    // itrate through array using loop, and check whether arr[i + 1] >= arr[i] (for duplicate elements)
    // if arr[i + 1] >= arr[i], array is sorted
    // but if arr[i + 1] < arr[i], array is unsorted
    bool flag = true;
    for (int i = 0; i <= size - 2; i++)
    {
        if (arr[i + 1] < arr[i])
        {
            flag = false;
        }
    }
    if (flag == true)
    {
        cout << "sorted";
    }
    else
    {
        cout << "unsorted";
    }
    return;
}
int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    checkSort(arr);
    return 0;
}