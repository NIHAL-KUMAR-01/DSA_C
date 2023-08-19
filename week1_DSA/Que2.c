/*Write a program to find the median of the elements in the given one-dimensional array. The median is the middle 
value of a sorted data set or the average of the two middle values for an even number of elements.*/

#include<stdio.h>
int main(){
    int n;
    printf("Enter number of element for a arrays:-");
    scanf("%d",&n);
    int array[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter %d element ",i+1);
        scanf("%d",&array[i]);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-i; j++)
        {
            if (array[j]>array[j+1])
            {
                int temp=array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
            }      
        } 
    }
    printf("Sorted array are:-");
    for (int i = 0; i < n;  i++)
    {   
        printf("%d ",array[i]);
    }
    if (n%2==0)
    {
        printf("\n\nThe median of the arrays is %d",(array[(n/2)]+array[(n/2)-1])/2);
    }
    else{
        printf("\n\nThe median of the arrays is %d",array[(n/2)]);
    }
    
    
    
    return 0;
}