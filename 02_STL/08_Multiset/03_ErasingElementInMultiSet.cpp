#include <bits/stdc++.h>
using namespace std;
int main()
{
    multiset<int> mst;
    mst.insert(1);
    mst.insert(2);
    mst.insert(2);
    mst.insert(2);
    mst.insert(3);
    mst.insert(4);   /* {1,2,2,2,3,4} */ 

    mst.erase(2);  /* it will erase all occurences of 2 */

    /* if we want to erase only one 2 at a time */
    auto it1 = mst.find(2);  /* itrator will point to address of first occurence of 2 */
    mst.erase(it1);

    /* if we want to erase two 2s at a time */
    // mst.erase(mst.find(2), mst.find(2)+2); 
    return 0;
}