/*3.	You are provided with two stacks, POP () and PUSH () functions for them,
 write a c-program to implement queue i.e insert and delete operation using 
 the available operations.*/

#include <stdio.h>
#define size 5

int queue[size];
int front = -1;
int rear = -1;

void PUSH(int element) {
    if (rear == size - 1) {
        printf("Queue Overflow\n");
        return;
    }
    if (front == -1) {
        front = 0;
    }
    rear++;
    queue[rear] = element;
    printf("%d is queued to the Queue\n",element);
}

void POP() {
    int element;
    if (front == -1 || front > rear) {
        printf("Queue Underflow\n");
    }
    element = queue[front];
    front++;
    printf("%d is dequeued from the Queue\n",element);
}

int main() {
    PUSH(10);
    PUSH(20);
    PUSH(30);
    PUSH(40);
    PUSH(50);
    POP();
    POP();


    return 0;
}
