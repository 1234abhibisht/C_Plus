#include <bits/stdc++.h>
using namespace std;
struct node {
    int data;
    struct node* link;
};
struct node* deleteLastNode(struct node* head) {
    struct node* ptr1 = NULL;
    struct node* ptr2 = NULL;
    if(head -> link == NULL) {  // single node in linked list
        head = NULL;
        return head;
    }
    ptr2 = head -> link;
    ptr1 = head;
    while(ptr2 -> link != NULL) {
        ptr1 = ptr2;
        ptr2 = ptr2 -> link;
    }
    ptr1 -> link = NULL;
    ptr2 = NULL;
    free(ptr2);
    return head;
}
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

    start = deleteLastNode(start);

    if(start == NULL) {  // if there was single node in list, then after deleting it start will be pointing to NULL
        free(start);
    }
    else {
        // output
        struct node* out = start;
        while(out != NULL) {
            cout << out -> data << " ";
            out = out -> link;
        }
    }
    return 0;
}