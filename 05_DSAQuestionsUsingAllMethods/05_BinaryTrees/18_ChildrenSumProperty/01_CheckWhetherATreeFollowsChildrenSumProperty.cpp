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
bool checkChildrenSum(node* root) {
    if(root == NULL) {
        return true;
    }
    if(root -> left == NULL && root -> right == NULL) {  // check for leaf nodes and also for if tree has a single node
        return true;
    }
    int child = 0;
    if(root -> left != NULL) {
        child += root -> left -> data;
    }
    if(root -> right != NULL) {
        child += root -> right -> data;
    }
    if(child != root -> data) {
        return false;
    }
    bool leftSub = checkChildrenSum(root -> left);
    bool rightSub = checkChildrenSum(root -> right);
    if(leftSub == false || rightSub == false) {
        return false;
    }
    return true;
}
int main() {
    node* root = new node(150);  // we have use constructor inside struct, so we dont need to use malloc, instead use new
    root -> left = new node(80);
    root -> right = new node(70);
    root -> left -> left = new node(40);
    root -> left -> right = new node(40);
    root -> right -> left = new node(30);
    root -> right -> right = new node(40);
    bool ans = checkChildrenSum(root);
    cout << ans;
    return 0;
}

// Time Complexity = O(n)
// Space Complexity = O(n), as we used DFS(preorder) and recursion has auxillary space