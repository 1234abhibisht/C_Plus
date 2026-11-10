// for non interative approach for preorder traversal we will use stack data structure

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
vector<int> inOrderTraversal(node* root) {
    vector<int> inorder;
    if(root == NULL) {
        return inorder;
    }
    stack<node*> st;
    while(true) {
        if(root != NULL) {
            st.push(root);
            root = root -> left;
        }
        else {
            if(st.empty() == true) {
                break;
            }
            root = st.top();
            st.pop();
            inorder.emplace_back(root -> data);
            root = root -> right;
        }
    }
    return inorder;
}
int main() {
    node* root = new node(5);  // we have use constructor inside struct, so we dont need to use malloc, instead use new
    root -> left = new node(10);
    root -> right = new node(20);
    root -> left -> left = new node(30);
    root -> left -> right = new node(40);
    root -> right -> left = new node(50);
    root -> right -> right = new node(60);
    vector<int> output = inOrderTraversal(root);
    for(auto v : output) {
        cout << v << " ";
    }
    return 0;
}

// Time Complexity = O(n), n is number of nodes
// Space Complexity - O(h), h is height of binary tree