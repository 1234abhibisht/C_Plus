#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter size of array : " << endl;
    cin >> n;

    int *arr = new int[n];
    cout << "Enter your array : ";
    for (int i = 0; i <= n - 1; i++)
    {
        cin >> arr[i];
    }

    int target;
    cout << "Enter target element : " << endl;
    cin >> target;

    /* precomputing by hashmap */
    map<int, int> mpp;
    for (int i = 0; i <= n - 1; i++)
    {
        mpp[arr[i]]++;
    }

    cout << target << " occurs " << mpp[target] << " times ";
    return 0;
}