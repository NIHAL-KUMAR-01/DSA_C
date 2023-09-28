/*3. Write a program to merge two linked lists.*/
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
    // printf("NULL");
}
struct node*insertatlast(struct node *head){
    struct node*temp=head;
    struct node*lastnew=(struct node*)malloc(sizeof(struct node));
    while(temp->next!=NULL){
        temp=temp->next;
    }
    printf("Enter data for last new node: ");
    scanf("%d",&lastnew->data);
    temp->next=lastnew;
    lastnew->next=NULL;
    return head;
}
struct node* merge(struct node* head, struct node* head2) {
    struct node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = head2;
    return head; 
}

int main(){
    struct node*head=(struct node *)malloc(sizeof(struct node));
    head->next=NULL;
    printf("Enter initial Data For First linked list 1: ");
    scanf("%d",&head->data);
    head=insertatlast(head);
    head=insertatlast(head);
    head=insertatlast(head);
    head=insertatlast(head);
    linked_display(head);
    struct node*head2=(struct node *)malloc(sizeof(struct node));
    head2->next=NULL;
    printf("\nEnter initial Data For Second linked list 2: ");
    scanf("%d",&head2->data);
    head2=insertatlast(head2);
    head2=insertatlast(head2);
    head2=insertatlast(head2);
    head2=insertatlast(head2);
    linked_display(head2);
    printf("\nFinal Merged Linked list is :\n");
    head=merge(head,head2);
    linked_display(head);
}
