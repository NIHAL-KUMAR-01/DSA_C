/*Write a C program to implement a stack where elements will be pushed from the first position of the array*/

#include<stdio.h>
int top=-1;
#define size 5
int stack[size];

void push(int element){
    if (top==size-1)
        {
            printf("Stack is full cannot push element");

        }
        else{
            top++;
            stack[top]=element;
            printf("\n%d  is added successfully in the stack\n",element);

        }
}
int main(){
    push(10);
    return 0;
}