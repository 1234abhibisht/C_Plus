#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4); /* {4,3,2,1} */

    cout << st.top() << " ";
    st.pop(); /* it will remove/pop 4 */
    cout << st.top() << " ";
    st.pop(); /* it will remove 3 */
    cout << st.top();
    return 0;
}