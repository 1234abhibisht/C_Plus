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
bool path(node* root, int node, vector<int> &ans) {
    if(root == NULL) {
        return false;
    }
    
    ans.emplace_back(root -> data);

    if(root -> data == node) {
        return true;
    }
    bool left = path(root -> left, node, ans);
    bool right = path(root -> right, node, ans);
    if(left == true || right == true) {
        return true;
    }
    ans.pop_back();
    return false;
}
vector<int> rootToNode(node* root, int node) {
    vector<int> ans;
    if(root == NULL) {
        return ans;
    }
    path(root, node, ans);
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
    return 0;
}

// Time Complexity = O(n)
// Space Complexity = O(h), auxillary space