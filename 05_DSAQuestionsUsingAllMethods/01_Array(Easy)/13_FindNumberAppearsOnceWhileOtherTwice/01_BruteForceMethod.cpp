#include <bits/stdc++.h>
using namespace std;
int numAppearsOnce(vector<int> &arr, int n)
{
    int once = 0;
    for (int i = 0; i <= n - 1; i++)
    {
        int count = 0;
        for (int j = 0; j <= n - 1; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
        if (count == 1)
        {
            once = arr[i];
            break;
        }
    }
    return once;
}
int main()
{
    vector<int> arr = {1, 1, 2, 3, 3, 4, 4};
    int size = arr.size();
    cout << numAppearsOnce(arr, size);
    return 0;
}

// time complexity = 0(n^2)
// space complexity = O(1)