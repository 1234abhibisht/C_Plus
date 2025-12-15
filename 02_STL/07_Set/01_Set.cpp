/* set stores unique elements(non duplicate) in sorted way */

#include <bits/stdc++.h>
using namespace std;
int main()
{
    set<int> st;
    st.insert(1);
    st.insert(2);
    st.emplace(2);  /* insert and emplace are same thing */
    st.insert(4);
    st.insert(3);
    return 0;
}
