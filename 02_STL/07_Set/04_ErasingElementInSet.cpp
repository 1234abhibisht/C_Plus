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
    st.insert(5); /* {1,2,3,4,5} */

    st.erase(3); /* it will erase 3 from set */

    /* if we want to erase from 2 to 4 */
    auto it1 = st.find(2);
    auto it2 = st.find(4);
    st.erase(it1, it2);
    return 0;
}
