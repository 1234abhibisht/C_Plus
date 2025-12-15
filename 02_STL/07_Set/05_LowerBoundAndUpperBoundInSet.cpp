#include <bits/stdc++.h>
using namespace std;
int main()
{
    set<int> st;
    st.insert(1);
    st.insert(2);
    st.emplace(2);
    st.insert(4);
    st.insert(3);

    auto it1 = st.lower_bound(2); /* it will return an itrator which will point to 2 */
    /* if 2 is not present in set, then it will return an itrator which will point to just one ]
       larger element than 2 present in set */

    auto it2 = st.upper_bound(2); /* upper bound will return an itrator which will point to just
   larger element than 2 present in set */
    return 0;
}
