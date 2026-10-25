#include <bits/stdc++.h>
using namespace std;
struct node {
    int data;
    struct node* link;
};
int main() {
    struct node* start = NULL;
    start = (struct node*)malloc(sizeof(struct node));
    start -> data = 10;
    start -> link = NULL;

    // second node
    struct node* ptr = (struct node*)malloc(sizeof(struct node));
    ptr -> data = 20;
    ptr -> link = NULL;
    start -> link = ptr;

    // third node
    ptr = (struct node*)malloc(sizeof(struct node));
    ptr -> data = 30;
    ptr -> link = NULL;
    start -> link -> link = ptr;

    // so we have a linked list containing three nodes

    // create new node at a particular position
    int pos;
    printf("enter position : ");
    cin >> pos;
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    temp -> data = 40;
    temp -> link = NULL;
    if(pos == 1) {  // at beginning of linked list
        temp -> link = start;
        start = temp;
    }
    else {
        ptr = start;
        for(int i = 1; i <= pos - 2; i++) {
            ptr = ptr -> link;
        }
        temp -> link = ptr -> link;
        ptr -> link = temp;
    }

    // output
    temp = start;
    while(temp != NULL) {
        cout << temp -> data << " ";
        temp = temp -> link;
    }
    return 0;
}