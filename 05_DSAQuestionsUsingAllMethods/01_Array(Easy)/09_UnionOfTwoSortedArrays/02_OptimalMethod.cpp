#include <bits/stdc++.h>
using namespace std;
void unionArray(vector<int> &arr1, vector<int> &arr2, int n1, int n2)
{
    vector<int> uni;
    int i = 0;
    int j = 0;
    while (i <= n1 - 1 && j <= n2 - 1)
    {
        if (arr1[i] <= arr2[j])
        {
            if (uni.size() == 0 || uni.back() != arr1[i])
            {
                uni.emplace_back(arr1[i]);
            }
            i++;
        }
        else
        {
            if (uni.size() == 0 || uni.back() != arr2[j])
            {
                uni.emplace_back(arr2[j]);
            }
            j++;
        }
    }
    while (i <= n1 - 1)
    {
        if (uni.size() == 0 || uni.back() != arr1[i])
        {
            uni.emplace_back(arr1[i]);
        }
        i++;
    }
    while (j <= n2 - 1)
    {
        if (uni.size() == 0 || uni.back() != arr2[j])
        {
            uni.emplace_back(arr2[j]);
        }
        j++;
    }

    for (int i = 0; i <= uni.size() - 1; i++)
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


// time complexity = O(n1 + n2)
// space complexity = O(n1 + n2), in worst case if both arrays have unique elements