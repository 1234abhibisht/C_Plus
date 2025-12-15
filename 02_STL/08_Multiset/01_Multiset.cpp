/* it is same as set, but also stores duplicate elements in sorted order */

#include <bits/stdc++.h>
using namespace std;
int main()
{
    multiset<int> mst;
    mst.insert(1);
    mst.insert(2);
    mst.insert(2);
    mst.insert(3);
    mst.insert(4);   /* {1,2,2,3,4} */ 
    return 0;
}