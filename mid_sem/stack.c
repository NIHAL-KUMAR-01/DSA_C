#include <stdio.h>
#include <stdlib.h>
#define size 5
int top = -1;
int stack[size];
void push(int element)
{
    if (top == size - 1)
    {
        printf("Stack is Full !");
    }
    else
    {
        top++;
        stack[top] = element;
        printf("%d is added to the stack\n",stack[top]);
    }
}
void pop()
{
    if (top == -1)
    {
        printf("Stack is Empty");
    }
    else
    {
        printf("%d is deleted from stack\n", stack[top]);
        top--;
    }
}
void display()
{
    if (top == -1)
    {
        printf("Stack is Empty nothing to display\n");
    }
    else
    {
        for (int i = top; i >= 0; i--)
        {
            printf("%d\n", stack[i]);
        }
    }
}

int main(){
    display();
    push(10);
    push(20);
    push(30);
    push(40);
    push(50);
    display();
    pop();
    display();

    return 0;

}
