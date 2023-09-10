// #include<stdio.h>
// void display(int row,int column,int array[row][column]){
//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < column; j++)
//         {
//             printf("%d ",array[i][j]);
//         }
//         printf("\n");   
//     } 
// }
// int main(){
//     int array1[2][3]={{7,8,1},{8,8,0}};
//     int array2[2][3]={{9,5,0},{0,1,2}};
//     int sum[2][3];
//     for (int i = 0; i < 2; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             sum[i][j]=array1[i][j]+array2[i][j];
//         }
//     }
//     printf("\nArray 1 is :-\n");
//     display(2,3,array1);
//     printf("\nArray 2 is :-\n");

//     display(2,3,array2);
//     printf("\nAddition of Both Matrix is\n");
//     display(2,3,sum);
// }
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct link
{
    int info;
    struct link *next;
};

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

void display(struct link *node)
{
    while (node != NULL)
    {
        printf("%d  ", node->info);
        node = node->next;
    }
}

int main()
{
    struct link *node;
    create(node);
    display(node);

    return 0;
}