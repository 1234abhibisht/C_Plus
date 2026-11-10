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
vector<int> postOrderTraversal(node* root) {
    vector<int> postorder;
    stack<node*> st1;
    stack<node*> st2;
    st1.push(root);
    while(!st1.empty()) {
        root = st1.top();
        st1.pop();
        st2.push(root);
        if(root -> left != NULL) {
            st1.push(root -> left);
        }
        if(root -> right != NULL) {
            st1.push(root -> right);
        }
    }
    while(!st2.empty()) {
        root = st2.top();
        st2.pop();
        postorder.emplace_back(root -> data);
    }
    return postorder;
}
int main() {
    node* root = new node(5);  // we have use constructor inside struct, so we dont need to use malloc, instead use new
    root -> left = new node(10);
    root -> right = new node(20);
    root -> left -> left = new node(30);
    root -> left -> right = new node(40);
    root -> right -> left = new node(50);
    root -> right -> right = new node(60);
    vector<int> output = postOrderTraversal(root);
    for(auto v : output) {
        cout << v << " ";
    }
    return 0;
}

// Time Complexity = O(n), n is number of nodes
// Space Complexity - O(h), h is height of binary tree