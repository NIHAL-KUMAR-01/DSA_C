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
void pop(){
    if (top==-1)
    {
        printf("Stack is Empty");
    }
    else{
        printf("\n%d is deleted from the stack\n",stack[top]);
        top--;
    }
    
}

void peek(){
    if (top == -1)
    {
        printf("Stack is empty");
    }
    else{
        printf("\n%d is in the top of the stack\n",stack[top]);
    }
    
}
void display(){
    if (top == -1)
    {
        printf("Stack is empty");
    }
    else{
        printf("\nDisplaying Data\n");
        for (int i = top; i>=0; i--)
        {
            printf("%d\n",stack[i]); 
        }
        
    }

}
int main(){
    push(6);
    push(7);
    push(8);
    push(5);
    push(3);
    pop();
    push(10);
    pop();
    pop();
    peek();
    display();
    return 0;
    

}