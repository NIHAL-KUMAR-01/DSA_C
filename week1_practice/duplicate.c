/*Write a program in c to find the duplicate element in a 1-D array*/
#include<stdio.h>
void dublicateelement(int array[],int size){
    for (int i = 0; i < size; i++)
    {
        for (int j = i+1; j < size; j++)
        {
            if (array[i]==array[j])
            {
                printf("\nDublicate element is : %d\n",array[i]);
                // break;
            } 
        }
    }
}
int main(){
    int size;
    printf("Enter the size of 1-D array ");
    scanf("%d",&size);
    int array[size];
    for (int i = 0; i < size; i++)
    {
        printf("Enter element : ");
        scanf("%d",& array[i]);
    }
    dublicateelement(array,size);
    return 0;
    

}