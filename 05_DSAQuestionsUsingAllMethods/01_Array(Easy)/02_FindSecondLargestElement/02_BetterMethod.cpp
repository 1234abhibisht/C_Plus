#include <bits/stdc++.h>
using namespace std;
int secondLargest(vector<int> &arr)
{
    int size = arr.size();

    // first fing largest element from unsorted array
    int largest = arr[0];
    for (int i = 1; i <= size - 1; i++)  // n - 1 times 
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }

    int secondLargest = INT_MIN; // put a minimum element in secondLargest
    // using loop itrate through whole array
    for (int i = 0; i <= size - 1; i++)  // n - 2 times
    {
        if (arr[i] > secondLargest && arr[i] != largest)
        {
            secondLargest = arr[i];
        }
    }
    return secondLargest;
}
int main()
{
    vector<int> arr = {4, 2, 3, 1, 5, 6};
    secondLargest(arr);
    return 0;
}

// time complexity = O(n - 1) = O(n), for finding largest element loop
// 0(n - 2) = O(n), for finding secondLargest element loop
// Total time complexity = 0(n + n) = O(2n)