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
vector<int> rightView(node* root) {
    vector<int> ans;
    if(root == NULL) {
        return ans;
    }
    queue<pair<node*, int>> qu;
    qu.push({root, 0});
    while(!qu.empty()) {
        root = qu.front().first;
        int level = qu.front().second;
        qu.pop();
        if(level == ans.size()) {
            ans.emplace_back(root -> data);
        }
        if(root -> right != NULL) {
            qu.push({root -> right, level + 1});
        }
        if(root -> left != NULL) {
            qu.push({root -> left, level + 1});
        }
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
    vector<int> ans = rightView(root);
    return 0;
};

// Time Complexity = O(n)
// Space Complexity = O(n), worst case if tree is full for level order traversal
//                  = O(n), best case if tree is skewed