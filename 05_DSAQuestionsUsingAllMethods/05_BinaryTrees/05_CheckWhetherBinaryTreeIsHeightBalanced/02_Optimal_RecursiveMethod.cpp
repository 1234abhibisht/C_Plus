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
int height(node* root) {
    if(root == NULL) {
        return 0;
    }
    int leftHeight = height(root -> left);
    int rightHeight = height(root -> right);
    // this function will return -1 for the conditions for which tree is not balanced
    if(leftHeight == -1 || rightHeight == -1) {
        return -1;
    }
    if(abs(leftHeight - rightHeight) > 1) {
        return -1;  
    }
    return 1 + max(leftHeight, rightHeight);
}
bool checkHeightBalanced(node* root) {
    if(root == NULL) {
        return true;  // empty binary tree is height balanced
    }
    int check = height(root);
    if(check == -1) {
        return false;
    }
    else {
        return true;
    }
}
int main() {
    node* root = new node(5);  // we have use constructor inside struct, so we dont need to use malloc, instead use new
    root -> left = new node(10);
    root -> right = new node(20);
    root -> left -> left = new node(30);
    root -> left -> right = new node(40);
    root -> right -> left = new node(50);
    root -> right -> right = new node(60);
    bool output = checkHeightBalanced(root);
    cout << output;
    return 0;
}

// Time Complexity = O(n);