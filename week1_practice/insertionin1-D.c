/*Write a program in c to insert a element at a specific index in 1-D array*/
#include <stdio.h>
void insertElement(int arr[], int size, int index, int element) {
    if (index < 0 || index > size) {
        printf("Invalid index\n");
        return;
    }

    for (int i = size; i > index; i--) {
        arr[i] = arr[i - 1];
    }

    arr[index] = element;
}

int main() {
    int arr[5] = {125, 129, 203, 254, 875,};
    int size = 5;
    printf("Before operation\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    int index = 3; 
    int element = 1; 

    insertElement(arr, size, index, element);
    size++; 

    printf("\n \n\nAfter operation\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
