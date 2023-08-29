#include<stdio.h>
int main(){
    int row,column;
    printf("Enter Rows : ");
    scanf("%d",&row);
    printf("Enter Columns : ");
    scanf("%d",&column);
    int array[row][column];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("Enter Element(%d,%d) : ",i,j);
            scanf("%d",&array[i][j]);
        }
    }
        printf("\n");

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("%d ",array[i][j]);
        }
        printf("\n");
    }
    
    return 0;

}