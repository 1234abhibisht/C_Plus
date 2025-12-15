#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.top() += 5; /* 4 + 5 = 9 */
    cout << st.top();
    return 0;
}
