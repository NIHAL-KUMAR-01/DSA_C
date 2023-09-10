/*Design a function enqueue () and queueDELETE () for 
static implementation of circular queue.*/

#include <stdio.h>
#define size 5 
int queue[size];  
int front = -1;    
int rear = -1;     

int isEmpty() {
    return front == -1;
}

int isFull() {
    return (rear + 1) % size == front;

}

void enqueue(int element) {
    if (isFull()) {
        printf("Queue is Full\n");
    } else {
        if (isEmpty()) {
            front = 0;
        }
        rear = (rear + 1) % size;
        queue[rear] = element;
        printf("%d is enqueued\n", element);
    }
}

void queueDELETE() {
    int item;

    if (isEmpty()) {
        printf("Queue is empty. Cannot delete.\n");
        return ; 
    }
    item = queue[front];
    printf("%d is dequeued\n",queue[front]);

    if (front == rear) {
        front = rear = -1; 
    } else {
        front = (front + 1) % size;
    }

}
void displayQueue() {
    if (isEmpty()) {
        printf("Queue is empty.\n");
        return;
    }

    printf("Circular Queue elements: ");

    for (int i = front; i != rear; i = (i + 1) % size) {
        printf("%d ", queue[i]);
    }
    printf("%d\n", queue[rear]);
}


int main() {
    enqueue(1);
    enqueue(2);
    enqueue(3);
    enqueue(4);
    // queueDELETE();
    displayQueue();
    enqueue(5);
    queueDELETE();
    enqueue(5);
    enqueue(5);
    enqueue(5);


    displayQueue();

    return 0;
}