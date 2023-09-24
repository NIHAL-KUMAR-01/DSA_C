#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*pre;
    struct node*next;
};
void linked_display(struct node*current){
    printf("NULL <-> ");
    while (current!=NULL)
    {
        printf("%d <-> ",current->data);
        current=current->next;
    }
    printf("NULL");
}
int main(){
    struct node*head=(struct node*)malloc(sizeof(struct node));
    struct node*second=(struct node*)malloc(sizeof(struct node));
    struct node*third=(struct node*)malloc(sizeof(struct node));
    head->data=10;head->pre=NULL;head->next=second;
    second->data=20;second->pre=head;second->next=third;
    third->data=30;third->pre=second;third->next=NULL;
    linked_display(head);



    return 0;
}