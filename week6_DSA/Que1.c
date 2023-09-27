/**/
#include<stdio.h>
#include<stdlib.h>
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
        current = current->next;
    }
    printf("NULL\n");
}
struct node *insertatend(struct node *head)
{
    struct node *temp = head;

    struct node *new = (struct node *)malloc(sizeof(struct node));
    printf("Enter Data for Next node: ");
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

int main(){
    struct node*head=(struct node*)malloc(sizeof(struct node));
    head->pre=NULL;
    printf("Enter First Node Data :");
    scanf("%d",&head->data);
    head->next=NULL;
    head=insertatend(head);
    head=insertatend(head);
    head=insertatend(head);
    head=insertatend(head);
    linked_display(head);
    return 0;
}
