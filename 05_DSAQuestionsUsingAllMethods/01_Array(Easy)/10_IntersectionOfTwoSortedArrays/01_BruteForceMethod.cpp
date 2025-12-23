#include <bits/stdc++.h>
using namespace std;
void intersectionArray(vector<int> &a, vector<int> &b, int n1, int n2)
{
    vector<int> intersection;
    vector<int> check(n2);
    for (int i = 0; i <= n1 - 1; i++)
    {
        for (int j = 0; j <= n2 - 1; j++)
        {
            if (a[i] == b[j] && check[j] == 0)
            {
                intersection.emplace_back(b[j]);
                check[j] = 1;
                break;
            }
            if (b[j] > a[i])
            {
                break;
            }
        }
    }
    for (auto it : intersection)
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

// time complexity = O(n1 * n2)
// space compleixty = O(n2)