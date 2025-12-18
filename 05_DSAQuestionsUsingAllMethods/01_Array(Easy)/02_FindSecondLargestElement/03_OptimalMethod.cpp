#include <bits/stdc++.h>
using namespace std;
int secondLargest(vector<int> &arr)
{
    // in unsorted array 
    int size = arr.size();
    int max = arr[0];       // put first element in max
    int secondMax = arr[1]; // put second element in secondMax

    // if secondMax > max, swap them
    if (secondMax > max)
    {
        swap(max, secondMax);
    }

    // use for loop from third element, and check if arr[i] > max, then put secondMax = max
    //  and max = arr[i]
    for (int i = 2; i <= size - 1; i++)  /* n times */
    {
        if (arr[i] > max && arr[i] > secondMax)
        {
            secondMax = max;
            max = arr[i];
        }
        // but if we have arr[i] less than max, but greater than secondMax
        if (arr[i] < max && arr[i] > secondMax)
        {
            secondMax = arr[i];
        }
    }
    return secondMax;
}
int main()
{
    vector<int> arr = {4, 2, 3, 1, 5, 6};
    secondLargest(arr);
    return 0;
}

// time complexity - O(n)