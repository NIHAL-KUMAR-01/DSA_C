#include <stdio.h>
#define size 5

int deque[size];
int front = -1;
int rear = -1;

// Check if the deque is empty
int isEmpty() {
    return front == -1;
}

// Check if the deque is full
int isFull() {
    return (front == 0 && rear == size - 1) || (rear == front - 1);
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
        front = size - 1;
    } else {
        front--;
    }
    
    deque[front] = data;
    printf("Added %d to the front.\n", data);
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
    } else if (rear == size - 1) {
        rear = 0;
    } else {
        rear++;
    }
    
    deque[rear] = data;
    printf("Added %d to the rear.\n", data);
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
    } else if (front == size - 1) {
        front = 0;
    } else {
        front++;
    }
    
    printf("Removed %d from the front.\n", data);
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
        rear = size - 1;
    } else {
        rear--;
    }
    
    printf("Removed %d from the rear.\n", data);
    return data;
}

// Display the contents of the deque
// Display the contents of the deque
void displayDeque() {
    printf("Total elements are: ");
    if (!isEmpty()) {
        int i;
        for (i = front; i != rear; i = (i + 1) % size) {
            printf("%d ", deque[i]);
        }
        printf("%d ", deque[i]); // Print the last element
    }
    printf("\n");
}


int main() {
    // Test the deque operations here
    addFront(5);
    addRear(3);
    addFront(32);
    displayDeque();
    removeFront();
    removeRear();
    displayDeque();
    
    return 0;
}
