#include <bits/stdc++.h>
using namespace std;
void intersectionArray(vector<int> &a, vector<int> &b, int n1, int n2)
{
    vector<int> output;
    int i = 0;
    int j = 0;
    while (i <= n1 - 1 && j <= n2 - 1)
    {
        if (a[i] < b[j])
        {
            i++;
        }
        else if (b[j] < a[i])
        {
            j++;
        }
        else
        {
            output.emplace_back(b[j]);
            i++;
            j++;
        }
    }
    for (auto it : output)
    {
        cout << it << " ";
    }
    return;
}
int main()
{
    vector<int> arr1 = {1, 1, 2, 3, 4, 5};
    vector<int> arr2 = {2, 3, 4, 4, 5, 6};
    int size1 = arr1.size();
    int size2 = arr2.size();
    intersectionArray(arr1, arr2, size1, size2);
    return 0;
}