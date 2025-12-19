#include <bits/stdc++.h>
using namespace std;
vector<int> leftRotate(vector<int> &arr, int i, int j)
{
    while (i < j)
    {
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
    return arr;
}
int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    int d = 7;
    int size = arr.size();
    d = d % size; // d = 2

    // rotate first d elements
    leftRotate(arr, 0, d - 1);

    // rotate remaining elements
    leftRotate(arr, d, size - 1);

    // rotate whole array
    leftRotate(arr, 0, size - 1);

    for (int i = 0; i <= size - 1; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}

// time complexity = O(n)
// space complexity = O(1)