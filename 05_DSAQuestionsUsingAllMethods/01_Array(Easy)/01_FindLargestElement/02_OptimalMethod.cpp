#include <bits/stdc++.h>
using namespace std;
int largestElement(vector<int> &arr)
{
    int max = arr[0];
    int size = arr.size();
    for (int i = 1; i <= size - 1; i++)   /* n - 1 times */
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}
int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    cout << largestElement(arr);
    return 0;
}

/* time complexity = O(n - 1) = O(n) */