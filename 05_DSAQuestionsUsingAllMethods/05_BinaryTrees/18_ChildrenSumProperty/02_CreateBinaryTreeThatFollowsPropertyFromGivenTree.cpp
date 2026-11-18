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
void childrenSum(node* root) {
    if(root == NULL) {
        return;
    }
    int child = 0;
    if(root -> left != NULL) {
        child += root -> left -> data;
    }
    if(root -> right != NULL) {
        child += root -> right -> data;
    }
    if(child >= root -> data) {
        root -> data = child;
    }
    else {
        if(root -> left != NULL) {
            root -> left -> data = root -> data;
        }
        if(root -> right != NULL) {
            root -> right -> data = root -> data;
        }
    }
    childrenSum(root -> left);
    childrenSum(root -> right);

    int x = 0;
    if(root -> left != NULL) {
        x = x + root -> left -> data;
    }
    if(root -> right != NULL) {
        x = x + root -> right -> data;
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
    return 0;
}

// Time Complexity = O(n)
// Space Complexity = O(n), as we used DFS(preorder) and recursion has auxillary space