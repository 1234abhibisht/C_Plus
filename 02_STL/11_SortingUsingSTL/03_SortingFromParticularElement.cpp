#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {5, 4, 2, 1, 3};
    /* sorting form 4 to 1 */
    sort(arr + 1, arr + 4);
    for (int i = 0; i <= 4; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";

    vector<int> v = {5, 4, 2, 1, 3};
    /* sorting from 4 to 1 */
    sort(v.begin() + 1, v.begin() + 4);
    for (auto it : v)
    {
        cout << it << " ";
    }
    return 0;
}
