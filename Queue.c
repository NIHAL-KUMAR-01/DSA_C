#include <stdio.h>
#define MAX_SIZE 100

int deque[MAX_SIZE];
int front = -1;
int rear = -1;

// Check if the deque is empty
int isEmpty() {
    return front == -1;
}

// Check if the deque is full
int isFull() {
    return (front == 0 && rear == MAX_SIZE - 1) || (rear == front - 1);
}

// Add an element to the front of the deque
void addFront(int data) {
    if (isFull()) {
        printf("Deque is full. Cannot add.\n");
        return;
    }
    
    if (front == -1) {
        front = 0;
        rear = 0;
    } else if (front == 0) {
        front = MAX_SIZE - 1;
    } else {
        front--;
    }
    
    deque[front] = data;
}

// Add an element to the rear of the deque
void addRear(int data) {
    if (isFull()) {
        printf("Deque is full. Cannot add.\n");
        return;
    }
    
    if (front == -1) {
        front = 0;
        rear = 0;
    } else if (rear == MAX_SIZE - 1) {
        rear = 0;
    } else {
        rear++;
    }
    
    deque[rear] = data;
}

// Remove an element from the front of the deque
int removeFront() {
    if (isEmpty()) {
        printf("Deque is empty.\n");
        return -1;
    }
    
    int data = deque[front];
    
    if (front == rear) {
        front = -1;
        rear = -1;
    } else if (front == MAX_SIZE - 1) {
        front = 0;
    } else {
        front++;
    }
    
    return data;
}

// Remove an element from the rear of the deque
int removeRear() {
    if (isEmpty()) {
        printf("Deque is empty.\n");
        return -1;
    }
    
    int data = deque[rear];
    
    if (front == rear) {
        front = -1;
        rear = -1;
    } else if (rear == 0) {
        rear = MAX_SIZE - 1;
    } else {
        rear--;
    }
    
    return data;
}

int main() {
    // Test the deque operations here
    return 0;
}
