#include <bits/stdc++.h>
using namespace std;
int main()
{
    /* first sort the array using quick sort, second last element will be second largest */
    /* but in worst case if array has duplicate largest element e.g. arr = {4,2,6,5,6,6} */
    // on sorting arr = {2,4,5,6,6,6}
    // so we have three largest element and second last element is also 6
    // in this case we will use loop from second last element

    // for worst case
    vector<int> arr = {4, 2, 6, 5, 6, 6};
    // sort using quick sort
    sort(arr.begin(), arr.begin() + 6);
    int size = arr.size();
    int largest = arr[size - 1];
    for (int i = size - 2; i >= 0; i--) // n - 1 times
    {
        if (arr[i] != largest)
        {
            cout << arr[i]; // second largest element
        }
    }
    return 0;
}

// time complexity
// average case = O(n logn)
// worst case = O(n logn + (n - 1)) = O(n logn + n)