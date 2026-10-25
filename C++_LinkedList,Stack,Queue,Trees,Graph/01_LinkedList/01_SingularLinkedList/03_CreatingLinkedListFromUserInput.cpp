// we want to create multiple nodes in a linked list
// take number of nodes from user and data for each node from user

// here first node will be created as normally (start pointer)
// for second nodes and nodes further from second, we need ptr and a temp pointer

// In linked list, there must be a pointer always at starting node(start pointer)
// we need another pointer to create nodes more than one

#include <bits/stdc++.h>
using namespace std;
struct node {
    int data;
    struct node* link;
};
int main() {
    int n;
    printf("number of nodes : ");
    cin >> n;

    // creating first node
    struct node* start = NULL;
    start = (struct node*)malloc(sizeof(struct node));
    int data1;
    printf("first node data : ");
    cin >> data1;
    start -> data = data1;
    start -> link = NULL;

    struct node* ptr = start;
    struct node* temp = NULL;
    for(int i = 1; i <= n - 1; i++) {
        temp = (struct node*)malloc(sizeof(struct node));
        int data_next;
        printf("enter data of %d node : ", i + 1);
        cin >> data_next;
        temp -> data = data_next;
        temp -> link = NULL;
        ptr -> link = temp;
        ptr = temp;
    }

    // output
    struct node* out = start;
    while(out != NULL) {
        cout << out -> data << " ";
        out = out -> link;
    }
    return 0;
}