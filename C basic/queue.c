#include <stdio.h>
#include "queue.h"

void initQueue(Queue *q) {
    q->front = -1;
    q->rear = -1;
    q->size = 0;
}

bool isQueueEmpty(Queue *q) {
    return q->size == 0;
}

bool isQueueFull(Queue *q) {
    return q->size == QUEUE_MAX_SIZE;
}

bool enqueue(Queue *q, int value) {
    if (isQueueFull(q)) {
        printf("Queue is full!\n");
        return false;
    }

    if (q->front == -1) q->front = 0;
    q->rear = (q->rear + 1) % QUEUE_MAX_SIZE;
    q->data[q->rear] = value;
    q->size++;
    return true;
}

bool dequeue(Queue *q, int *removedValue) {
    if (isQueueEmpty(q)) {
        printf("Queue is empty!\n");
        return false;
    }

    *removedValue = q->data[q->front];
    q->front = (q->front + 1) % QUEUE_MAX_SIZE;
    q->size--;

    if (q->size == 0) {
        q->front = -1;
        q->rear = -1;
    }

    return true;
}

void displayQueue(Queue *q) {
    if (isQueueEmpty(q)) {
        printf("Queue is empty!\n");
        return;
    }

    printf("Queue: ");
    int count = q->size;
    int index = q->front;
    while (count--) {
        printf("%d ", q->data[index]);
        index = (index + 1) % QUEUE_MAX_SIZE;
    }
    printf("\n");
}
