#include <stdio.h>
#include <stdlib.h>
#define size 5
int front = -1;
int rear = -1;
int queue[size];
int enqueue(int element)
{
    if (rear == size - 1)
    {
        printf("Queue is Full!!\n");
    }
    else{
        if (front == -1)
        {
        front = 0;
        }
        rear++;
        queue[rear] = element;
        printf("%d is enqueued\n", queue[rear]);
    }
}
int dequeue(){
    if (front==-1 || front>rear)
    {
       printf("Cannot dequeuue , queue is empty");
    }
    else{
        printf("\n%d is dequed from queue",queue[front]);
        if (front==rear)
        {
           front=rear=-1;
        }
        front++;  
    }  
}
void display(){
    if (front==-1)
    {
        printf("No element to display\n");
    }
    else{
        for (int i = front; i <= rear; i++)
        {
            printf("%d ",queue[i]);
        }
        
    }
    
}
int main()
{
    display();
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);
    enqueue(60);
    enqueue(70);
    display();
    dequeue();
    dequeue();
   enqueue(20);

    return 0;
}