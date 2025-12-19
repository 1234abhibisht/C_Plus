#include <bits/stdc++.h>
using namespace std;
int linearSearch(vector<int> &arr, int n, int num)
{
    for (int i = 0; i <= n - 1; i++)
    {
        if (arr[i] == num)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    // we have an array {1,2,3,4,5}, find occurence of 4
    // return index of 4
    // but if num doesn't exists, return -1
    vector<int> arr = {1, 2, 3, 4, 5};
    int size = arr.size();
    linearSearch(arr, size, 4);
    return 0;
}