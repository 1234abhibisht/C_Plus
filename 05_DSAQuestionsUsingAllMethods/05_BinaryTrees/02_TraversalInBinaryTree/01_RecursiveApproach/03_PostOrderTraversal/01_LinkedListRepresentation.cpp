// for a non complete binary tree or skewed tree linked list representation is better

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
void postorderTraversal(node* root) {
    if(root == NULL) {
        return;
    }
    postorderTraversal(root -> left);
    cout << root -> data << " ";
    postorderTraversal(root -> right);
}
int main() {
    node* root = new node(5);  // we have use constructor inside struct, so we dont need to use malloc, instead use new
    root -> left = new node(10);
    root -> right = new node(20);
    root -> left -> left = new node(30);
    root -> left -> right = new node(40);
    root -> right -> left = new node(50);
    root -> right -> right = new node(60);
    postorderTraversal(root);
    return 0;
}

// Time Complexity - O(n) -> for complete binary trees as well as skewed trees, where n is number of node
// Space Complexity - O(h), as Auxillary space is used in recursion, h is height of binary tree