/* given an integer array and a target number from user, find how many times the target number 
    appears in array */

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter size of array : " << endl;
    cin >> n;

    int *arr = new int[n]; /* to dynamically allocate memeory */
    cout << "Enter array : ";
    for (int i = 0; i <= n - 1; i++)
    {
        cin >> arr[i];
    }

    int target;
    cout << "Enter target number to find it's frequency : " << endl;
    cin >> target;

    /* now find maximum element of array arr */
    int max = *max_element(arr, arr + n);

    /* create an array name hasharr having size (max + 1), and initialize each element with zero */
    int hasharr[max + 1] = {0};

    /* precomputation of hashing */
    for (int i = 0; i <= n - 1; i++)
    {
        hasharr[arr[i]]++;
    }

    cout << target << " occurs " << hasharr[target] << " times\n";
    return 0;
}