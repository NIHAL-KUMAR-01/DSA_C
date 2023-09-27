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
struct node *insertatfront(struct node *head){
    struct node *temp=head;
    struct node* new=(struct node *)malloc(sizeof(struct node));
    printf("Enter the Data for New_Front_Node: ");
    scanf("%d",&new->data);
    new->pre=NULL;
    new->next=temp;
    temp->pre=new;
    head=new;
    return head;  
}

struct node *insertatposition(struct node *head){
    struct node*current=head;
    struct node*temp=head;
    int counter=1,pos;
    while (current->next!=NULL)
    {
        counter++;
        current=current->next;
    }
    printf("Total Nodes in Doubly_Linked_List : %d\n",counter);
    printf("Enter Position where you want to create a node: ");
    scanf("%d",&pos);
    if (pos<1||pos>counter)
    {
        printf("!!Invalid Position!!");
        exit(1);
    }
    else if (pos==1)
    {
        insertatfront(head);
    }
    else{
        struct node*new=(struct node*)malloc(sizeof(struct node));
        printf("Enter Data For New_Position_Node: ");
        scanf("%d",&new->data);
        for (int i = 0; i < pos-2; i++)
        {
            temp=temp->next;
        }
        new->next=temp->next;
        temp->next=new;
        new->pre=temp;
        return head;
    }
}

struct node * deletionatend(struct node* head){
    struct node*temp=head;
    while(temp->next->next!=NULL){
        temp=temp->next;
    }
    struct node*temp2=temp->next;
    temp2->pre=NULL;
    printf("\nDisplaying Linked_list \nAfter Last Node %d is De-linked\n",temp2->data);
    temp->next=NULL;
    free(temp2);
    return head;
}
struct node *deletionatfirst(struct node*head){
    struct node*temp=head;
    head=head->next;
    temp->next=NULL;
    free(temp);
    return head;
}


struct node *deletionatpos(struct node *head){
    struct node*current=head;
    struct node*temp=head;
    int counter=1,pos;
    while (current->next!=NULL)
    {
        counter++;
        current=current->next;
    }
    printf("Total Nodes in Doubly_Linked_List : %d\n",counter);
    printf("Enter Position where you want to delete a node: ");
    scanf("%d",&pos);
    if (pos<1||pos>counter)
    {
        printf("!!Invalid Position!!");
        exit(1);
    }
    else if (pos==1)
    {
        deletionatfirst(head);
    }
    else{
        for (int i = 0; i < pos-2; i++)
        {
            temp=temp->next;
        }
        struct node*temp2=temp->next;
        temp->next=temp2->next;
        struct node*temp3=temp2->next;
        temp2->pre=temp;
        return head;
    }
}
int main()
{
    struct node *head = (struct node *)malloc(sizeof(struct node));
    struct node *second = (struct node *)malloc(sizeof(struct node));
    struct node *third = (struct node *)malloc(sizeof(struct node));
    head->data = 10;
    head->pre = NULL;
    head->next = second;
    second->data = 20;
    second->pre = head;
    second->next = third;
    third->data = 30;
    third->pre = second;
    third->next = NULL;
    linked_display(head);
    head = insertatend(head);
    linked_display(head);
    head = insertatfront(head);
    linked_display(head);
    head=insertatposition(head);
    linked_display(head);
    head=deletionatend(head);
    linked_display(head);
    printf("After Deletion_at_first, Nodes are :");
    head=deletionatfirst(head);
    linked_display(head);
    head=deletionatpos(head);
    linked_display(head);
    return 0;
}