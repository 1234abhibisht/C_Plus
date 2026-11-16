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
void view(node* root, int level, vector<int> &ans) {
    if(root == NULL) {
        return;
    }
    if(level == ans.size()) {
        ans.emplace_back(root -> data);
    }
    rightView(root -> right, level + 1);
    rightView(root -> left, level + 1);
}
vector<int> rightView(node* root, int level) {
    vector<int> ans;
    if(root == NULL) {
        return ans;
    }
    view(root, level, ans);
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
    vector<int> ans = rightView(root, 0);
    return 0;
};

// Time Complexity = O(n)
// Space Complexity = O(h)