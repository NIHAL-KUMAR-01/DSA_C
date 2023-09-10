#include <stdio.h>
#include <stdlib.h>
#define size 5
int front = -1;
int rear = -1;
int queue[size];
void enqueue(int element)
{
    if (rear == size - 1)
    {
        printf("Queue is Full");
        exit(0);
    }
    else 
        if (front == -1)
            {
                front = 0;
            }

            rear++;
            queue[rear] = element;
            printf("%d is enqueued \n\n", queue[rear]);
}
void dequeue()
{
    if (front == -1 || front > rear)
    {
        printf("Queue is Empty!!\n");
    }
    else
    {
        printf("%d is dequeued\n", queue[front]);
        if (front == rear)
        {
            front = rear = -1;
        }
        else
        {
            front++;
        }
    }
}

void display()
{
    if (front == -1 || front > rear)
    {
        printf("Queue is empty\n\n");
    }
    else
    {
        printf("Displaying Queue\n");
        for (int i = front; i <= rear; i++)
        {
            printf("%d \n", queue[i]);
        }
    }
}

int main()
{
    display();
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(40);
    display();
    dequeue();
    enqueue(500);
}