#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
};
struct node *insertend(struct node*head){
    struct node *temp=head;
    struct node *newnode=(struct node *)malloc(sizeof(struct node));
    printf("Enter Value for next node: ");
    scanf("%d",& newnode->data);
    while (temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newnode;
    newnode->next=NULL;
    return head; 
}
void single_display(struct node*head){
    struct node*temp=head;
    while (temp!=NULL)
    {   
        printf("%d -> ",temp->data);
        temp=temp->next;
    }
    printf("NULL");
    
}
int main(){
    struct node *head=(struct node *)malloc(sizeof(struct node));
    printf("Enter Data for Initial Node: ");
    scanf("%d",&head->data);
    head->next=NULL;
    head=insertend(head);
    head=insertend(head);
    head=insertend(head);
    head=insertend(head);
    single_display(head);

}