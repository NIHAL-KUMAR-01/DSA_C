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

struct node* insertatend(struct node*head){
    struct node*temp=head;
    struct node*new=(struct node *)malloc(sizeof(struct node));
    printf("Enter Data for Next node : ");
    scanf("%d",&new->data);
    while (temp->next!=NULL)
    {
        temp=temp->next;
    }
    new->pre=temp;
    new->next=NULL;
    temp->next=new;
    return head; 
}

struct node *delete(struct node *head) {
    struct node *current = head;
    struct node *temp;
    int value;
    printf("Enter  Data value of Node which you want to delete: ");
    scanf("%d",&value);
    while (current != NULL) {
        if (current->data == value) {
            if (current->pre == NULL) {
                head = current->next;
                if (head != NULL) {
                    head->pre = NULL;
                }
            } else {
                current->pre->next = current->next;
                if (current->next != NULL) {
                    current->next->pre = current->pre;
                }
            }
            temp = current;
            current = current->next;
            free(temp);
        } else {
            current = current->next;
        }
    }
    return head;
}

int main(){
    struct node* head=(struct node *)malloc(sizeof(struct node));
    head->pre=NULL;
    printf("Enter Data for Initial node: ");
    scanf("%d",&head->data);
    head->next=NULL;
    head=insertatend(head);
    head=insertatend(head);
    head=insertatend(head);
    head=insertatend(head);
    printf("Your Nodes are : ");
    linked_display(head);
    head=delete(head);
    printf("Nodes After Deletion : ");
    linked_display(head);
}