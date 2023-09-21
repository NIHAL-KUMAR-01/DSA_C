#include<stdio.h>
#include<stdlib.h>
#define size 5
int top=-1;
int stack[size];
void push(int element){
    if (top==size-1)
    {
        printf("Stack is Overflow");
    }
    else{
        top++;
        stack[top]=element;
        printf("%d is pushed in the stack\n",stack[top]);
    }
}
void pop(){
    if (top==-1)
    {
        printf("Stack is Underflow");
    }
    else{
        printf("%d is popped out from stock\n",stack[top]);
        top--;
    }  
}
void display(){
    if (top==-1)
    {
        printf("No any elements to display");
    }
    for (int i = top; i >=0; i--)
    {
        printf("%d\n",stack[i]);
    } 
}
int main(){
    push(10);
    push(20);
    push(30);
    push(40);
    push(50);
    push(150);
    display();
    pop();
    pop();
    display();

    return 0;

}