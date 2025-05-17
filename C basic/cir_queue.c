#include <stdio.h>
#define SIZE 5

int queue[SIZE];
int front = -1, rear = -1;

void enqueue(int value) {
    if ((rear + 1) % SIZE == front) {
        printf("Queue is full!\n");
        return;
    }
    if (front == -1) front = 0;
    rear = (rear + 1) % SIZE;
    queue[rear] = value;
}

void dequeue() {
    if (front == -1) {
        printf("Queue is empty!\n");
        return;
    }
    printf("Dequeued: %d\n", queue[front]);
    if (front == rear) front = rear = -1;
    else front = (front + 1) % SIZE;
}

void display() {
    if (front == -1) {
        printf("Queue is empty!\n");
        return;
    }
    printf("Queue: ");
    int i = front;
    while (1) {
        printf("%d ", queue[i]);
        if (i == rear) break;
        i = (i + 1) % SIZE;
    }
    printf("\n");
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    display();
    dequeue();
    enqueue(50);
    display();
    return 0;
}
