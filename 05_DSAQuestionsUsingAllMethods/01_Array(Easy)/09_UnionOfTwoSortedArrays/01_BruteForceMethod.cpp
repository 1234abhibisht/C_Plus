#include <bits/stdc++.h>
using namespace std;
void unionArray(vector<int> &arr1, vector<int> &arr2, int n1, int n2)
{

    // create a set and put all elements from both arrays to that set
    set<int> st;
    for (int i = 0; i <= n1 - 1; i++)
    {
        st.insert(arr1[i]);
    }
    for (int i = 0; i <= n2 - 1; i++)
    {
        st.insert(arr2[i]);
    }

    // now put all elements from set to uni array
    vector<int> uni(st.size());
    int idx = 0;
    for (auto it : st)
    {
        uni[idx] = it;
        idx++;
    }

    for (int i = 0; i <= st.size() - 1; i++)
    {
        cout << uni[i] << " ";
    }
    return;
}
int main()
{
    vector<int> arr1 = {1, 1, 2, 3, 4, 5};
    vector<int> arr2 = {2, 3, 4, 4, 5, 6};
    int size1 = arr1.size();
    int size2 = arr2.size();
    unionArray(arr1, arr2, size1, size2);
    return 0;
}

// time complexity = O(n1 logn) + O(n2 logn) + O(n1 + n2)
// O(n1 + n2) for putting elements from set to union, in worst case if both arr1 and arr2 have unique elements
// Total T.C = O(n1 logn + n2 logn + n1 + n2)

// space complexity = O(n1 + n2) + O(n1 + n2)
// first O(n1 + n2) is for using set
// second O(n1 + n2) is for using extra uni array to take elements from set, in worst case