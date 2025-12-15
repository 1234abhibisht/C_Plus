#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int min = *min_element(arr, arr + 5);
    cout << min;
    return 0;
}
