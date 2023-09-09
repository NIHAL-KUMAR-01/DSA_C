/*Design a function CQINSERT () and CQDELETE () for 
static implementation of circular queue.*/

#include <stdio.h>

#define size 5 

int cq[size];  
int front = -1;    
int rear = -1;     

int isEmpty() {
    return front == -1;
}

int isFull() {
    return (front == 0 && rear == size - 1) || (rear == (front - 1) % (size - 1));
}

void CQINSERT(int item) {
    if (isFull()) {
        printf("Queue is full. Cannot insert.\n");
        return;
    }
    if (front == -1) {
        front = rear = 0; 
    } else {
        rear = (rear + 1) % size; 
    }
    cq[rear] = item;
}

void CQDELETE() {
    int item;

    if (isEmpty()) {
        printf("Queue is empty. Cannot delete.\n");
        return ; 
    }
    item = cq[front];

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
        printf("%d ", cq[i]);
    }
    printf("%d\n", cq[rear]);
}


int main() {
    CQINSERT(1);
    CQINSERT(2);
    CQINSERT(3);
    CQINSERT(4);
    // CQDELETE();
    displayQueue();
    CQINSERT(5);
    displayQueue();

    return 0;
}