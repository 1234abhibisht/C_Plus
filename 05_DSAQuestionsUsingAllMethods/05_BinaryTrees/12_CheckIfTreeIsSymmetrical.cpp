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
bool symmetricHelp(node* left, node* right) {
    if(left == NULL || right == NULL) {
        return (left == right);
    }
    return (left -> data == right -> data) && symmetricHelp(left -> left, right -> right) && (left -> right, right -> left);
}
bool checkSymmetricTree(node* root) {
    if(root == NULL) {  // empty tree is symmetric
        return true;
    }
    return symmetricHelp(root -> left, root -> right);
}
int main() {
    node* root = new node(5);  // we have use constructor inside struct, so we dont need to use malloc, instead use new
    root -> left = new node(10);
    root -> right = new node(20);
    root -> left -> left = new node(30);
    root -> left -> right = new node(40);
    root -> right -> left = new node(50);
    root -> right -> right = new node(60);
    bool ans = checkSymmetricTree(root);
    cout << ans;
    return 0;
}

