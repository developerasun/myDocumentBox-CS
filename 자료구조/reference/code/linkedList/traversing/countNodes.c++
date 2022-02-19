#include<stdio.h>
#include<stdlib.h>

// exercise : create a single linked list
// and iterate it to print the number nodes
// it contains

// NOT DONE 
struct node
{
    int data;
    struct node *link;
};

struct node* createPointer() {
    struct node *ptr = (struct node*)malloc(sizeof(struct node));
    return ptr;
}

void createNode(struct node *ptr, int _data) {
    ptr->data = _data;
    ptr->link = NULL;
}

void countNode(struct node *ptr) {
    int count = 0; 
    while (ptr != NULL) {
        ptr = ptr->link;
        count++;
    }
    printf("all nodes counted : %d", count);
}

int main()
{
    struct node *head = createPointer();
    struct node *current = createPointer();

    createNode(head, 1);
    createNode(current, 2);
    createNode(current, 3);
    
    countNode(head);
    return 0;
}
