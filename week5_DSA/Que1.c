#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct link
{
	int info;
	struct link *next;
};
void create(struct link *node);
void display(struct link *node);

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
	display(node);
}
	
void create(struct link *node)
{
	char opt;
	printf("\n Enter a value: ");
	scanf("%d", &node->info);
	node->next=NULL;
	printf("\n Any more to entry(y/n): ");
	opt=getche();
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
		opt=getche();
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
	
int main(){
    
    return 0;
}