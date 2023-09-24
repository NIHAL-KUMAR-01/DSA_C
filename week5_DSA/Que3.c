#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* next;
};

struct node* createnode(int data) {
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    if (newnode == NULL) {
        printf("Memory allocation failed\n");
        exit(1); 
    }
    newnode->data = data;
    newnode->next = NULL;
    return newnode;
}
void linked_display(struct node *current)
{
    while (current != NULL)
    {
        printf("%d ->", current->data);
        current = current->next;
    }
    printf("NULL");
}

int sumLinkedList(struct node* head) {
    int sum = 0;
    struct node* current = head;
    
    while (current != NULL) {
        sum += current->data;
        current = current->next;
    }
    
    return sum;
}

int main() {
    struct node* head = createnode(10);
    head->next = createnode(30);
    head->next->next = createnode(20);
    head->next->next->next = createnode(40);
    head->next->next->next->next = createnode(50);
    linked_display(head);
    int totalSum = sumLinkedList(head);
    printf("\nSum of all elements in the linked list: %d\n", totalSum);
    return 0;
}
