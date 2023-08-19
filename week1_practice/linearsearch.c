/*write a program in c to perform linear search operation in 1-D arrays*/

#include<stdio.h>
int linearsearch(int array[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (array[i] == key) {
            return i;
        }
    }
    return -1;//means no element found
}
int main(){
    int num;
    int key;
    
    printf("Enter the number of elements for the array: ");
    scanf("%d", &num);
    
    int array[num];
    for (int i = 0; i < num; i++) {
        printf("Enter element: ");
        scanf("%d", &array[i]);
    }
    
    printf("\nEnter element to search: ");
    scanf("%d", &key);
    
    int index = linearsearch(array, num, key);
    
    if (index == -1) {
        printf("Element not found!\n");
    } else {
        printf("Your key is at index no %d\n", index);
    }


}