#include<stdio.h>
#include<stdlib.h>

struct link
{
	int info;
	struct link *next;
};
void create(struct link *node);
void display(struct link *node);
struct link* insertAtAnyPosition(struct link *node);
struct link* insertAtFirst(struct link *node);

void main()
{
	struct link *node;
	node = (struct link *)malloc(sizeof(struct link));
	if(node==NULL)
	{
		printf("\n Memory is not allocated");
		exit(0);
	}
	
	create(node);
	printf("\n Before insertion.");
	display(node);
	struct link* newLink=insertAtAnyPosition(node);
	printf("\n After insertion.");
	display(newLink);
}
	
void create(struct link *node)
{
	char opt;
	printf("\n Enter a value: ");
	scanf("%d", &node->info);
	node->next=NULL;
	printf("\n Any more to entry(y/n): ");
	scanf(" %c", &opt);
	while(opt=='Y' || opt=='y')
	{
		node->next=(struct link *)malloc(sizeof(struct link));
		if(node==NULL)
		{
			printf("\n Memory is not allocated");
			exit(0);
		}
		node=node->next;
		printf("\n Enter a value: ");
		scanf("%d", &node->info);
		node->next=NULL;
		printf("\n Any more to entry(y/n): ");
		scanf(" %c", &opt);
	}
}
void display(struct link *node)
{
	while(node!=NULL)
	{
		printf("\n%d", node->info);
		node=node->next;
	}
}
struct link * insertAtAnyPosition(struct link *node)
{
	struct link *temp1=node;
	int count=1,pos,i;
	while(temp1->next!=NULL)
	{
		count++;
		temp1=temp1->next;
	}
	printf("\n Enter position to insert: ");
	scanf("%d", &pos);
	if(pos>count)
	{
		printf("\n This position is not available.");
		exit(0);
	}
    struct link *curr = (struct link *) malloc(sizeof(struct link));
    if(curr==NULL)
	{
		printf("\n Memory is not allocated");
		exit(0);
	}
	
    
    struct link *temp2=node;
    if(pos==0)
    {
    	return (insertAtFirst(temp2));
	}
	else
	{
	printf("\n Enter a value for current node: ");
	scanf("%d", &curr->info);
	curr->next=NULL;
    for(i=1;i<pos;i++)
	{
		temp2=temp2->next;
	}
    
    curr->next = temp2->next;
    temp2->next = curr;
	}
    return node;
}

struct link * insertAtFirst(struct link *node){
    struct link * curr = (struct link *) malloc(sizeof(struct link));
    if(curr==NULL)
	{
		printf("\n Memory is not allocated");
		exit(0);
	}
    printf("\n Enter a value for current node: ");
	scanf("%d", &curr->info);

    curr->next = node;
    node=curr;
    
	return node; 
}	