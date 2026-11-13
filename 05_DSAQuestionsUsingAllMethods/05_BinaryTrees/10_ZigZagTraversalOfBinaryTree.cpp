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
vector<vector<int>> zigzagTraveral(node* root) {
    vector<vector<int>> ans;
    if(root == NULL) {
        return ans;
    }
    queue<node*> qu;
    qu.push(root);
    bool flag = true;
    while(!qu.empty()) {
        int size = qu.size();
        vector<int> temp(size);  // here we need to predeclare size of temp, because below we are using temp[index]
                                 // as if not declared, initial size of temp will be 0 so we can't put element in certain index
        for(int i = 0; i <= size - 1; i++) {
            root = qu.front();
            qu.pop();

            // find position where to insert node's value
            // if flag = true, insert left to right
            // if flag = false, insert right to left
            int index;
            if(flag == true) {
                index = i;
            }
            else {
                index = size - (i + 1);
            }

            temp[index] = root -> data;
            if(root -> left != NULL) {
                qu.push(root -> left);
            }
            if(root -> right != NULL) {
                qu.push(root -> right);
            }
        }
        flag = !flag;
        // flag != flag means the below code
        // if(flag == true) {
        //     flag = false;
        // }
        // else {
        //     flag = true;
        // }
        ans.emplace_back(temp);
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