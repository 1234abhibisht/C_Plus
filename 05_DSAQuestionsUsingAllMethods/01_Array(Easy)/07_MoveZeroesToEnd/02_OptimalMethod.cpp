#include <bits/stdc++.h>
using namespace std;
vector<int> zeroesEnd(vector<int> &arr, int n)
{
    int i = INT_MIN;
    int j = INT_MIN;
    if (n < 2)
    { // if array contains only one element
        return;
    }
    for (int a = 0; a <= n - 1; a++)
    {
        if (arr[a] == 0)
        {
            i = a;
            j = a + 1;
            break;
        }
    }
    while (j <= n - 1)
    {
        if (arr[j] != 0)
        {
            swap(arr[i], arr[j]);
            i++;
            j++;
        }
        else
        {
            j++;
        }
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

// time complexity = O(n) + O(0) = O(n), as in second loop, j is goind from
// a + 1 to n - 1 = O(n - a - 1) = O(-1) = O(0)
// space complexity = O(1)