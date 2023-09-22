#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node * next;
};
int main(){
    struct node *head;
    struct node *second;
    struct node *third;
    head=(struct node *)malloc(sizeof(struct node));
    second=(struct node *)malloc(sizeof(struct node));    
    third=(struct node *)malloc(sizeof(struct node));
    //link first and second node
    head->data=10;
    head->next=second;
    //link second and third node
    second->data=20;
    second->next=third;
    //terminate the list at third node
    third->data=30;
    third->next=NULL;
    struct node *current=head;
    printf(":-----Single linked list:-----\n");
    while (current!=NULL)
    {
        printf("%d ->",current->data);
        current=current->next;
    }
    printf("NULL");
    


    return 0;
}