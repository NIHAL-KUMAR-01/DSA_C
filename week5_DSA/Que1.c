#include <stdio.h>
#include<conio.h>
#include <stdlib.h>
struct link
{
    int info;
    struct link *next;//next---address for next
};
void create(struct link *node);
void display(struct link *node);
int main()
{
    struct link *node;
    node = (struct link *)malloc(sizeof(struct link));
    if (node == NULL)
    {
        printf("Memory Not Allocated");
        exit(0);
    }
    create(node);
    display(node);
    return 0;
}
void create(struct link *node)
{
    char option;
    printf("\nEnter value ");
    scanf("%d", &node->info);
    node->next = NULL;
    printf("\nAny more node you want('y'or'n') :");
    option = getche();
    while (option == 'y' || option == 'Y')
    {
        node = (struct link *)malloc(sizeof(struct link));
        if (node == NULL)
        {
            printf("Memory Not Allocated");
            exit(0);
        }
        node = node->next;
        printf("\nEnter value ");
        scanf("%d", &node->info);
        node->next = NULL;
        printf("\nAny more node you want('y'or'n') :");
        option = getche();
    }
}

void display(struct link*node){
    while (node==NULL)
    {
        printf("%d \n",node->next);
        node=node->next;
    }
}


