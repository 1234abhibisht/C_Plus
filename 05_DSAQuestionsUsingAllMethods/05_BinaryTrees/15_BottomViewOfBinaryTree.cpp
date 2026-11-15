#include <bits/stdc++.h>
using namespace std;
struct node {
    struct node* left;
    int data;
    struct node* right;

    node(int data) {  // it is a constructor to create a new node
        data = data;
        left = NULL;
        right = NULL;
    }
};
vector<int> topView(node* root) {
    vector<int> ans;
    if(root == NULL) {
        return ans;
    }
    queue<pair<node*, int>> qu;
    map<int, int> mpp;
    qu.push({root, 0});
    while(!qu.empty()) {
        root = qu.front().first;
        int x = qu.front().second;
        qu.pop();
        mpp[x] = root -> data;
        if(root -> left != NULL) {
            qu.push({root -> left, x - 1});
        }
        if(root -> right != NULL) {
            qu.push({root -> right, x + 1});
        }
    }
    for(auto it : mpp) {
        ans.emplace_back(it.second);
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
    vector<int> ans = topView(root);
    return 0;
}

// Time Complexity = O(n logm)
// Space Complexity = O(n)