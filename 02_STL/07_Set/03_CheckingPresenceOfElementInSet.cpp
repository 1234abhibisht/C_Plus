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

    int check = st.count(3);  /* if 3 is present in set, st.count will return 1, else 0 */

    cout << check;
    return 0;
}
