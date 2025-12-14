#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter size of array : ";
    cin >> n;

    int *arr = new int[n];
    cout << "Enter array : ";
    for (int i = 0; i <= n - 1; i++)
    {
        cin >> arr[i];
    }

    int max = arr[0];
    for (int i = 0; i <= n - 1; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    int hasharr[max + 1] = {0};
    for (int i = 0; i <= n - 1; i++)
    {
        hasharr[arr[i]]++;
    }

    /* for maximum frequency element */
    int large = hasharr[0];
    int maxelement = 0;
    for (int i = 1; i <= max; i++)
    {
        if (hasharr[i] > large)
        {
            large = hasharr[i];
            maxelement = i;
        }
    }

    /* for minimum frequency element */
    for(int i = 0; i <= max; i++) {
        
    }


    cout << "Maximum frequency element is " << maxelement;
    return 0;
}