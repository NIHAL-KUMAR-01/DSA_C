/*1. Write a program to multiply every element of the linked list with 10.*/
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
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
struct node*insertatlast(struct node *head){
    struct node*temp=head;
    struct node*lastnew=(struct node*)malloc(sizeof(struct node));
    while(temp->next!=NULL){
        temp=temp->next;
    }
    printf("\nEnter data for last new node: ");
    scanf("%d",&lastnew->data);
    temp->next=lastnew;
    lastnew->next=NULL;
    return head;
}
struct node*multiple(struct node*head){
    struct node*current=head;
    while (current!=NULL)
    {
        current->data=(current->data)*10;
        current=current->next;
    }
    return head;
    
}
int main(){
    struct node*head=(struct node*)malloc(sizeof(struct node));
    head->next=NULL;
    printf("Enter Data for initial node: ");
    scanf("%d",&head->data);
    head=insertatlast(head);
    head=insertatlast(head);
    head=insertatlast(head);
    head=insertatlast(head);
    printf("Initial Nodes are: \n");
    linked_display(head);
    head=multiple(head);
    printf("\nAfter operation Nodes are: \n");

    linked_display(head);
    return 0;
}
