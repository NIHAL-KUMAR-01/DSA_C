#include<stdio.h>
#define size 5
int front=-1;
int rear=-1;
int cq[size];
int isfull(){
    return (rear+1)%size == front;
}
int isempty(){
    return front==-1;
}
void enqueue(int item){
    if (isfull())
    {
        printf("Queue Overflow\n");
    }
    else{
        if (isempty())
        {
            front=0;
        } 
        rear=(rear+1)%size;
        cq[rear]=item;
        printf("%d is enqueued ",cq[rear]);

    }  
}

void dequeue(){
    if (isempty())
    {
        printf("Queue is Empty underflow");
    }
    else{
        printf("%d is dequeued from Queue",cq[front]);
        if (rear==front)
        {
            rear=front=-1;
        }
        front=(front+1)%size;
        
    }
}

void display() {
    if (isempty()) {
        printf("No element to display\n");
    } else {
        int i = front;
        while (i != rear) {
            printf("%d ", cq[i]);
            i = (i + 1) % size;
        }
        printf("%d\n", cq[i]); // Display the last element
    }
}
int main(){
    enqueue(30);
    enqueue(40);
    enqueue(50);
    enqueue(550);
    enqueue(300);
    enqueue(31);
    display();
    dequeue();
    dequeue();
    display();
    enqueue(300);
    enqueue(31);
    display();

    return 0;
}