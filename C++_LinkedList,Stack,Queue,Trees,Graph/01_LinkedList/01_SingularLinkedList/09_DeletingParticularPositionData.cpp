#include <bits/stdc++.h>
using namespace std;
struct node {
    int data;
    struct node* link;
};
struct node* deletePosNode(struct node* head, int deletePos) {
    struct node* ptrPos = NULL;
    struct node* ptr1 = NULL;
    ptrPos = head;
    ptr1 = head;
    for(int i = 1; i <= deletePos - 1; i++) {
        ptrPos = ptrPos -> link;
    }
    if(head -> link == NULL && deletePos > 1) {
        printf("Invalid position");
        return NULL;
    }
    if(ptrPos -> link == NULL) {  // last node to delete
        while(ptr1 -> link != ptrPos) {
            ptr1 = ptr1 -> link;
        }
        ptr1 -> link = NULL;
        ptrPos = NULL;
        free(ptrPos);
    }
    else if(ptrPos == head) {  // first node to delete
        ptr1 = head;
        head = head -> link;
        ptr1 -> link = NULL;
        ptr1 = NULL;
        free(ptr1);
    }
    else {
        struct node* ptr2 = head;
        while(ptr1 -> link != ptrPos) {
            ptr1 = ptr1 -> link;
        }
        ptr2 = ptrPos -> link;
        ptrPos -> link = NULL;
        ptr1 -> link = NULL;
        ptrPos = NULL;
        free(ptrPos);
        ptr1 -> link = ptr2;
    }
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

    int deletePos;
    printf("enter position whose data to delete : ");
    cin >> deletePos;

    start = deletePosNode(start, deletePos);

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