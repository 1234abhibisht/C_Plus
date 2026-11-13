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
int maxWidth(node* root) {
    if(root == NULL) {  // empty binary tree
        return 0;
    }
    queue<pair<node*, int>> qu;
    qu.push({root, 0});
    int ans = 0;
    while(!qu.empty()) {
        int size = qu.size();
        int minIdx = qu.front().second;
        int first, last;
        for(int i = 0; i <= size - 1; i++) {
           int newIdx = qu.front().second - minIdx;
           root = qu.front().first;
           qu.pop();
           if(i == 0) {
            first = newIdx;
           }
           if(i == size - 1) {
            last = newIdx;
           }
           if(root -> left != NULL) {
            qu.push({root -> left, 2 * newIdx + 1});
           }
           if(root -> right != NULL) {
            qu.push({root -> right, 2 * newIdx + 2});
           }
        }
        ans = max(ans, (last - first) + 1);
    }
    return ans;
}
int main() {
    node* root = new node(5);  // we have use constructor inside struct, so we dont need to use malloc, instead use new
    root -> left = new node(10);
    root -> right = new node(20);
    root -> left -> left = new node(30);
    root -> left -> right = new node(40);
    root -> right -> left = new node(50);
    root -> right -> right = new node(60);
    int output = maxWidth(root);
    return 0;
}

// Time Complexity = O(n), n is number of nodes
// Space Complexity = O(n)