// arr = {1,2,3,4,5}
// output = {2,3,4,5,1}

#include <bits/stdc++.h>
using namespace std;
vector<int> leftRotate(vector<int> &arr, int size)
{
    // int size = arr.size();
    int temp = arr[0];
    for (int i = 1; i <= size - 1; i++)
    {
        arr[i - 1] = arr[i];
    }
    arr[size - 1] = temp;
    return arr;
}
int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    int size = arr.size();
    leftRotate(arr, size);
    for (int i = 0; i <= size - 1; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}