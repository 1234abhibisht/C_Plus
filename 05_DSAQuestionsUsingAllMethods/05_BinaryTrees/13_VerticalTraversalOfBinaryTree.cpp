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
vector<vector<int>> verticalTraversal(node* root) {
    vector<vector<int>> ans;
    if(root == NULL) {
        return ans;
    }
    queue<pair<node*, pair<int, int>>> qu;
    map<int, map<int, multiset<int>>> mpp;
    qu.push({root, {0, 0}});
    while(!qu.empty()) {
        root = qu.front().first;
        qu.pop();
        int x = qu.front().second.first;
        int y = qu.front().second.second;
        mpp[x][y].insert(root -> data);
        if(root -> left != NULL) {
            qu.push({root -> left, {x - 1, y + 1}});
        }
        if(root -> right != NULL) {
            qu.push({root -> right, {x + 1, y + 1}});
        }
    }
    for(auto it1 : mpp) {
        vector<int> temp;
        for(auto it2 : it1.second) {
            temp.insert(temp.end(), it2.second.begin(), it2.second.end());
        }
        ans.emplace_back(temp);
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
    verticalTraversal(root);
    return 0;
}

// Time Complexity = O(n logm), where is n is number of nodes and m is size of map
//                 -> as we are using map inside while loop, where while loop is to traverse to every node
// Space Complexity = O(n)