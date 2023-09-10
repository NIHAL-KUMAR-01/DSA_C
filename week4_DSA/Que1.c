/*Write a menu driven c-code for the following operations on Linear queue using array.
(i) Insertion
(ii) Deletion
(iii) Traversal
*/
#include <stdio.h>
#include <stdlib.h>
#define size 5

int queue[size];
int front = -1, rear = -1;
// algo--for insertion use rear,and deletion use front
// for insertion
void enqueue(int value)
{
    if (rear == size - 1)
    {
        printf("Queue is full. Cannot insert.\n");
    }
    else
    {
        if (front == -1)
        {
            front = 0;
        }
        rear++;
        queue[rear] = value;
        printf("%d inserted into the queue.\n", value);
    }
}
// for deletion
void dequeue()
{
    if (front == -1 || front > rear)
    {
        printf("Queue is empty. Cannot delete.\n");
    }
    else
    {
        printf("%d deleted from the queue.\n", queue[front]);
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

void traverse()
{
    if (front == -1)
    {
        printf("Queue is empty.\n");
    }
    else
    {
        printf("Queue elements: ");
        for (int i = front; i <= rear; i++)
        {
            printf("%d ", queue[i]);
        }
        printf("\n");
    }
}

int main()
{
    int choice, value;

    while (1)
    {
        printf("\nChoose an Option: \n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Traverse\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter the value to enqueue: ");
            scanf("%d", &value);
            enqueue(value);
            break;
        case 2:
            dequeue();
            break;
        case 3:
            traverse();
            break;
        case 4:
            exit(0);
        default:
            printf("Invalid choice. Please enter a valid option.\n");
        }
    }
    return 0;
}