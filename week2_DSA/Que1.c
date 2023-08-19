/*Experiment with a 2-dimensional array of size N x M and
calculate the sum of all its elements.*/
#include<stdio.h>
int main(){
    int row,column;
    printf("2-D Array (m X n)\n");
    printf("Enter the row(m) : ");
    scanf("%d",&row);
    printf("Enter the column(n) : ");
    scanf("%d",&column);
    int array[row][column];
    int sum=0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("Enter element at index (%d,%d) ",i,j);
            scanf("%d",&array[i][j]);
            sum=sum+array[i][j];
        }
    }
    printf("Your array is\n");

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("%d ",array[i][j]);
        }
        printf("\n");
    }
    printf("\nSum of all Element in array is : %d",sum);
    
    return 0;
}