#include<stdio.h>
int main(){
    int row,column;
    int zerono=0;
    int nonzerono=0;
    printf("Enter rows: ");
    scanf("%d",&row);
    printf("Enter columns: ");
    scanf("%d",&column);
    int array[row][column];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("Enter Element at index(%d,%d) ",i,j);
            scanf("%d",&array[i][j]);
            if (array[i][j]==0)
            {
                zerono++;
            }
            else{
                nonzerono++;
            }
        }
    }
    if (nonzerono>zerono)
    {
       printf("Row\tColumn\tValue\n");
       for (int i = 0; i < row; i++)
       {
            for (int j = 0; j < column; j++)
                {
                    if (array[i][j]!=0)
                    {
                        printf("%d\t%d\t%d\n",i,j,array[i][j]);
                    }
                    else{ printf("");
                    }
                }
            // printf("\n"); 

        } 
    }
    
    
    
    return 0;
}