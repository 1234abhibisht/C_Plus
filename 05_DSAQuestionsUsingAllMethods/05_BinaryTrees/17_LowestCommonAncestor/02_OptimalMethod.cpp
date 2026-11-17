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
node* lowestCommonAncestor(node* root, node* p, node* q) {
    if(root == NULL || root == p || root == q) {
        return root;
    }  // below three conditions can be written in one only
    // if(root == NULL) {
    //     return NULL;
    // }
    // else if(root == p) {
    //     return p;
    // }
    // else if(root == q) {
    //     return q;
    // }
    node* leftSub = lowestCommonAncestor(root -> left, p, q);
    node* rightSub = lowestCommonAncestor(root -> right, p, q);
    if(leftSub == NULL) {
        return rightSub;
    }
    else if(rightSub == NULL) {
        return leftSub;
    }
    else {  // both leftSub and rightSub are not NULL
        return root;
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
    node* ans = lowestCommonAncestor(root, root -> left -> left, root -> right -> left);
    cout << ans -> data;
    return 0;
}

// Time Complexity = O(n)
// Space Complexity = O(h)