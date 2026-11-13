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
    diameter = max(diameter, leftHeight + rightHeight);
    return max(leftHeight, rightHeight) + 1;
}
int diameter = INT_MIN;
int findDiameter(node* root) {
    if(root == NULL) {
        return 0;  // if tree is empty
    }
    height(root);
    return diameter;
}
int main() {
    node* root = new node(5);  // we have use constructor inside struct, so we dont need to use malloc, instead use new
    root -> left = new node(10);
    root -> right = new node(20);
    root -> left -> left = new node(30);
    root -> left -> right = new node(40);
    root -> right -> left = new node(50);
    root -> right -> right = new node(60);
    int ans = findDiameter(root);
    return 0;
}

// Time Compleixty = O(n)