#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[5] = {5, 4, 2, 1, 3};
    sort(arr, arr + 5);
    for (int i = 0; i <= 4; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
