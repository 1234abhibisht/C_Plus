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

    auto it1 = st.find(1); /* it will return an itrator which will point to address of 1 in set */

    auto it2 = st.find(6); /* as 6 is not present in set, it will return an itrator which will
                              point just next address of end element */
    
    return 0;
}
