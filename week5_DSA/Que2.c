/*Write a C program to implement a singly linked list and perform a search operation to find a specific element in the list. */
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void linked_display(struct node *current)
{
    while (current != NULL)
    {
        printf("%d ->", current->data);
        current = current->next;
    }
    printf("NULL");
}
void search_element(struct node *head){
    struct node *temp = head;
    int counter = 0; // Initialize counter to 0
    int search;
    int pos = 1; // Initialize pos to 1
    printf("\nEnter the element to search: ");
    scanf("%d", &search);
    
    while (temp != NULL)
    {
        if (temp->data == search)
        {
            counter++;
            printf("Element found at position %d\n", pos);
        }
        temp = temp->next;
        pos++;
    }
    if (counter == 0)
        printf("Element not found in the linked list\n");
    else
        printf("Total Frequency of %d: %d\n", search, counter);
}

int main()
{
    struct node *head, *second, *third, *fourth, *fifth;
    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));
    fifth = (struct node *)malloc(sizeof(struct node));
    head->data = 10;
    head->next = second;
    second->data = 30;
    second->next = third;
    third->data = 20;
    third->next = fourth;
    fourth->data = 40;
    fourth->next = fifth;
    fifth->data = 50;
    fifth->next = NULL;
    linked_display(head);
    search_element(head);


    return 0;
}
