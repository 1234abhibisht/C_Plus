#include <bits/stdc++.h>
using namespace std;
int main()
{
    multiset<int> mst;
    mst.insert(1);
    mst.insert(2);
    mst.insert(2);
    mst.insert(3);
    mst.insert(4); /* {1,2,2,3,4} */

    int count = mst.count(2); /* it will tell the frequency of 2, unlike in set where it was
   telling whether number is present in set or not */

    cout << count;
    return 0;
}