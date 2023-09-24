/*Write a C program to implement a singly linked list and perform an insertion operation to insert a new node after a specific element in the list.
previously      10 -> 30 -> 20 -> 40 -> 50
After insertion 10 -> 30 -> 20 -> 25-> 40 -> 50*/

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
struct node *insertafter(struct node *head)
{
    struct node *temp = head;
    struct node *count = head;
    int counter = 1, pos;
    while (count->next != NULL)
    {
        counter++;
        count = count->next;
    }
    printf("\nTotal Nodes present in Linked list: %d\n", counter);
    printf("Enter the position after which you want to create a node: ");
    scanf("%d", &pos);
    if (pos < 1 || pos > counter)
    {
        printf("!! Invalid Position !!");
    }
    else
    {
        struct node *new = (struct node *)malloc(sizeof(struct node));
        printf("Enter the Data for new node: ");
        scanf("%d", &new->data);
        for (int i = 0; i < pos - 1; i++)
        {
            temp = temp->next;
        }
        new->next = temp->next;
        temp->next = new;
        return head;
    }
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
    head = insertafter(head);
    linked_display(head);

    return 0;
}