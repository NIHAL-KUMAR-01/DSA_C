/*2. Write a program to print the number of non-zero elements in the list.*/
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
void counter(struct node*head){
    int nonzero=0;
    struct node*temp=head;
    while (temp!=NULL)
    {
        if (temp->data!=0)
        {
            nonzero=nonzero+1;
        }
        temp=temp->next;
    }
    printf("\nNo of Non zero Data in nodes are : %d",nonzero);
    
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
    linked_display(head);
    counter(head);
    return 0;
}