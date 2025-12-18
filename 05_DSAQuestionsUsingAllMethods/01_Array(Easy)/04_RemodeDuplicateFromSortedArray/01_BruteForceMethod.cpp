#include <bits/stdc++.h>
using namespace std;
void removeDuplicate(vector<int> &arr)
{
    int size = arr.size();

    // first create a set and put each element of array into the set
    // we know set takes unique elements in sorted way, it will automatically eliminate duplicate ones
    set<int> st;
    for (int i = 0; i <= size - 1; i++) // n times
    {
        st.insert(arr[i]);
    }

    // as set will eliminate duplicate elemnts, now we will put back elements from set to array
    int idx = 0;
    for (auto it : st)
    {
        arr[idx] = it;
        idx++;
    }
}
int main()
{
    vector<int> arr = {1, 2, 2, 3, 3, 4, 4};
    removeDuplicate(arr);
    return 0;
}

// time complexity
// set = O(n logn)
// loop to put elements in set = O(n)
// Total T.C = 0(n logn + n)
// space complexity = O(n), as we are using extra set to put elements