struct node*insertatposition(struct node *head){
    struct node* counttemp=head;
    struct node*temp=head;
    int count=1;//counting node
    int pos;
    while (counttemp->next!=NULL)
    {
        counttemp=counttemp->next;
        count++;
    }
    printf("\nTotal Node in the Linked list is %d\n",count);
    printf("Enter the position where you want to insert a node: ");
    scanf("%d",&pos);
    if (pos<1 || pos>count)
    {
        printf("!!Invalid Position!!");
    }
    else{
        struct node * newpos=(struct node*)malloc(sizeof(struct node));
        printf("Enter the data for %d position :",pos);
        scanf("%d",&newpos->data);
        for (int i = 0; i < pos-2; i++)
        {
            temp=temp->next;
        }
        newpos->next=temp->next;
        temp->next=newpos;  
        return head;
    }
}