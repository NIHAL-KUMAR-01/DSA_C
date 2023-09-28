/*4. Write a program to delete the first element of a doubly linked list. Add this node as the last node of the list.*/
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *pre;
    struct node *next;
};
void linked_display(struct node *current)
{
    printf("NULL <-> ");
    while (current != NULL)
    {
        printf("%d <-> ", current->data);
        // printf("%p %p %p |||| ",current->pre,current,current->next);
        current = current->next;
    }
    printf("NULL\n");
}
struct node *insertatend(struct node *head)
{
    struct node *temp = head;

    struct node *new = (struct node *)malloc(sizeof(struct node));
    printf("Enter Data for new_Last_ node: ");
    scanf("%d", &new->data);
    new->next = NULL;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = new;
    new->pre = temp;
    return head;
}
struct node*operation(struct node*head){
    struct node*temp=head;
    head=head->next;
    struct node*temp2=head;
    while (temp2->next!=NULL)
    {
        temp2=temp2->next;
    }
    temp2->next=temp;
    temp->pre=temp2;
    temp->next=NULL;  
    return head;
}

int main(){
    struct node *head = (struct node *)malloc(sizeof(struct node));
    head->next=NULL;
    head->pre=NULL;
    printf("Enter Initial Node Data Value: ");
    scanf("%d",&head->data);
    head=insertatend(head);
    head=insertatend(head);
    head=insertatend(head);
    head=insertatend(head);
    printf("\nInitial Nodes are: ");
    linked_display(head);
    printf("\nAfter Shifting Nodes are: ");
    head=operation(head);
    linked_display(head);

}