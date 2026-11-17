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
bool path(node* root, node* target, vector<node*> &ans) {
    if(root == NULL) {
        return false;
    }
    if(root -> data == target -> data) {
        return true;
    }
    ans.emplace_back(root);
    int leftSub = path(root -> left, target, ans);
    int rightSub = path(root -> right, target, ans);
    if(leftSub == true || rightSub == true) {
        return true;
    }
    ans.pop_back();
    return false;
}
node* lowestCommonAnestor(node* root, node* p, node* q) {
    // first take path from root to p
    vector<node*> v1;
    vector<node*> v2;
    path(root, p, v1);
    path(root, q, v2);
    
    // now compare elements of both vectors, the last common element will be LCA
    int sizev1 = v1.size();
    int sizev2 = v2.size();
    node* ans;
    for(int i = 0; i <= max(sizev1, sizev2); i++) {
        if(v1[i] -> data == v2[i] -> data) {
            ans = v1[i];
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
    return 0;
}

// Time Complexity = O(n){to find path for 1st node} + O(n){to find path for second node} = O(n) + O(n){to compare vectors}
// Space Complexity = O(n) + O(n) {for v1 and v2 respectively}