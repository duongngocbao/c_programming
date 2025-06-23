#ifndef QUEUE_H
#define QUEUE_H

#include <stdbool.h>

#define QUEUE_MAX_SIZE 100

typedef struct {
    int data[QUEUE_MAX_SIZE];
    int front;
    int rear;
    int size;
} Queue;

// Khởi tạo queue
void initQueue(Queue *q);

// Kiểm tra trạng thái
bool isQueueEmpty(Queue *q);
bool isQueueFull(Queue *q);

// Thao tác queue
bool enqueue(Queue *q, int value);
bool dequeue(Queue *q, int *removedValue);

// Hiển thị queue
void displayQueue(Queue *q);

#endif
