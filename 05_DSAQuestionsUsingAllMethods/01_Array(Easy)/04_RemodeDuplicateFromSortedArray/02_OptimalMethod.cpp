#include <bits/stdc++.h>
using namespace std;
void removeDup(vector<int> &arr)
{
    int i = 0;
    int size = arr.size();
    for (int j = 1; j <= size - 1; j++)
    {
        if (arr[j] != arr[i])
        {
            arr[i + 1] = arr[j];
            i++;
        }
    }

    for (int a = 0; a <= i; a++)
    {
        cout << arr[a] << " ";
    }
    return;
}
int main()
{
    vector<int> arr = {1, 1, 2, 2, 2, 3, 3};
    removeDup(arr);
    return 0;
}