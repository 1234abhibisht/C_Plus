#include <bits/stdc++.h>
using namespace std;
vector<int> sort_0_1_2(vector<int> arr, int n)
{
    int ele0 = 0, ele1 = 0, ele2 = 0;
    for (int i = 0; i <= n - 1; i++)
    {
        if (arr[i] == 0)
        {
            ele0++;
        }
        else if (arr[i] == 1)
        {
            ele1++;
        }
        else
        {
            ele2++;
        }
    }
    for (int i = 0; i <= ele0 - 1; i++)
    {
        arr[i] = 0;
    }
    for (int i = ele0; i <= (ele0 + ele1) - 1; i++)
    {
        arr[i] = 1;
    }
    for (int i = ele0 + ele1; i <= n - 1; i++)
    {
        arr[i] = 2;
    }
    return arr;
}
int main()
{
    vector<int> arr = {1, 0, 0, 2, 1, 0, 1, 2, 0};
    int size = arr.size();
    for (auto it : sort_0_1_2(arr, size))
    {
        cout << it << " ";
    }
    return 0;
}

// time complexity = O(n) + O(n) = O(2n), another O(n) is combined of all three loops used to put 
// elements in array in sorted way

// space complexity = O(n)
