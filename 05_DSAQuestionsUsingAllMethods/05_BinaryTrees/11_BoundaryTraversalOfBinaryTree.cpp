#include <bits/stdc++.h>
using namespace std;
struct node {
    struct node* left;
    int data;
    struct node* right;

    node(int val) {  // it is a constructor to create a new node
        data = val;
        left = NULL;
        right = NULL;
    }
};
void leftBoundary(node* root, vector<int> &ans) {
    node* ptr = root -> left;
    while(true) {
        if(ptr != NULL) {
            ans.emplace_back(ptr -> data);
        }
        if(ptr -> left != NULL) {
            ptr = ptr -> left;
        }
        else {
            ptr = ptr -> right;
        }
        if(ptr -> left == NULL && ptr -> right == NULL) {
            break;
        }
    }
}
void rightBoundary(node* root, vector<int> &ans) {
    node* ptr = root -> right;
    stack<node*> st;
    while(true) {
        if(ptr != NULL) {
            st.push(ptr);
        }
        if(ptr -> right != NULL) {
            ptr = ptr -> right;
        }
        else {
            ptr = ptr -> left;
        }
        if(ptr -> left == NULL && ptr -> right == NULL) {
            break;
        }
    }
    while(!st.empty()) {
        ans.emplace_back(st.top() -> data);
        st.pop();
    }
}
void leafNodes(node* root, vector<int> &ans) {
    if(root -> left == NULL && root -> right == NULL) {
        ans.emplace_back(root -> data);
        return;
    }
    leafNodes(root -> left, ans);
    leafNodes(root -> right, ans);
}
int main() {
    node* root = new node(5);  // we have use constructor inside struct, so we dont need to use malloc, instead use new
    root -> left = new node(10);
    root -> right = new node(20);
    root -> left -> left = new node(30);
    root -> left -> right = new node(40);
    root -> right -> left = new node(50);
    root -> right -> right = new node(60);

    vector<int> ans;
    ans.emplace_back(root -> data); // first put root node in ans

    // for anticlockwise boarder traversal
    // -> first call leftBoundry, then leafNodes, then rightBoundary
    
    // for clockwise boarder traversal
    // -> first call rightBoundary, then leafNodes, then leftBoundry

    // anticlockwise
    leftBoundary(root, ans);
    leafNodes(root, ans);
    rightBoundary(root, ans);

    for(auto v : ans) {
        cout << v << " ";
    }
    return 0;
}

// Time Complexity = O(h){for left boundary traversal} + O(h){for right boundary traversal} + O(n){leaf node traversal}
// Space Complexity - O(h), for stack used for right boundary