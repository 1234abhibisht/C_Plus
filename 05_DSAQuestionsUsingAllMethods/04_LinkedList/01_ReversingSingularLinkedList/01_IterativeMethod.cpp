#include <bits/stdc++.h>
using namespace std;
struct node {
    int data;
    struct node* link;
};
struct node* reverseLinkedList(struct node* head) {
    struct node* front = NULL;
    struct node* back =NULL;
    while(head != NULL) {
        front = head -> link;
        head -> link = back;
        back = head;
        head = front;
    }
    head = back;
    return head;
}
int main() {
    struct node* start = NULL;
    start = (struct node*)malloc(sizeof(struct node));
    start -> data = 10;
    start -> link = NULL;

    struct node* ptr = NULL;
    ptr = (struct node*)malloc(sizeof(struct node));
    ptr -> data = 20;
    ptr -> link = NULL;
    start -> link = ptr;

    ptr = (struct node*)malloc(sizeof(struct node));
    ptr -> data = 30;
    ptr -> link = NULL;
    start -> link -> link = ptr;

    ptr = (struct node*)malloc(sizeof(struct node));
    ptr -> data = 40;
    ptr -> link = NULL;
    start -> link -> link -> link = ptr;

    ptr = NULL;
    free(ptr);

    // we have a linked list of 4 nodes having data 10, 20, 30, 40, 50
    // Now reverse this linked list
    start = reverseLinkedList(start);
    // output
    struct node* out = start;
    while(out != NULL) {
        cout << out -> data << " ";
        out = out -> link;
    }
    return 0;
}
