// we have to count pairs in a array in which left element is > right element
// Ex - [5,3,2,4,1] 
// pairs = (5,3),(5,4),(5,1),(3,2),(3,1),(2,1),(4,1)
// Note -> (4,2) will not count, as in array 4 is in right of 2

#include <bits/stdc++.h>
using namespace std;
int countInversions(vector<int> &arr) {
    int count = 0;
    for(int i = 0; i <= arr.size() - 1; i++) {
        for(int j = i + 1; j <= arr.size() - 1; j++) {
            if(arr[i] > arr[j]) {
                count++;
            }
        }
    }
    return count;
}
int main()
{
    vector<int> arr = {5,3,2,4,1};
    cout << countInversions(arr);
    return 0;
}

// Time Complexity - O(n^2)
// Space Complexity - O(1)