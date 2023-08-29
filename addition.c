#include<stdio.h>
void display(int row,int column,int array[row][column]){
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("%d ",array[i][j]);
        }
        printf("\n");   
    } 
}
int main(){
    int array1[2][3]={{7,8,1},{8,8,0}};
    int array2[2][3]={{9,5,0},{0,1,2}};
    int sum[2][3];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            sum[i][j]=array1[i][j]+array2[i][j];
        }
    }
    printf("\nArray 1 is :-\n");
    display(2,3,array1);
    printf("\nArray 2 is :-\n");

    display(2,3,array2);
    printf("\nAddition of Both Matrix is\n");
    display(2,3,sum);
}
