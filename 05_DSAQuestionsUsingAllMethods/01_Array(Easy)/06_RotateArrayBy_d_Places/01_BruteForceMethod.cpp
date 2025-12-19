#include <bits/stdc++.h>
using namespace std;
vector<int> leftRotate(vector<int> &arr, int n, int d)
{
    // we have to rotate array to left by d places
    d = d % n;
    vector<int> temp;

    // if d = 2; put first 2 elements in temp array(vector)
    for (int i = 0; i <= d - 1; i++)
    {
        temp.emplace_back(arr[i]);
    }

    // now shift elements
    for (int i = d; i <= n - 1; i++)
    {
        arr[i - d] = arr[i];
    }

    // now put back elements from temp array to arr
    // int j = 0;
    for (int i = n - d; i <= n - 1; i++)
    {
        arr[i] = temp[i - (d + 1)]; // or arr[i] = temp[i - (d + 1)]
        // j++;
    }
    return arr;
}
int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    int size = arr.size();
    leftRotate(arr, size, 7);
    for (int i = 0; i <= size - 1; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}

// time complexity = O(d) + 0(n - d) + O(d)
// Total T.C = O(n + d)
// space complexity = O(d), we have taken an extra array that contains first d elements
//  of arr 