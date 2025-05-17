#include <stdio.h>
#include <stdlib.h>

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
    printf("Enqueued: %d\n", value);
}

void dequeue() {
    if (front == -1) {
        printf("Queue is empty!\n");
        return;
    }
    printf("Dequeued: %d\n", queue[front]);
    if (front == rear) {
        front = rear = -1; // Queue is now empty
    } else {
        front = (front + 1) % SIZE;
    }
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
    int choice, value;
    while (1) {
        printf("\n===== CIRCULAR QUEUE MENU =====\n");
        printf("1. Enqueue (Thêm phần tử)\n");
        printf("2. Dequeue (Xóa phần tử)\n");
        printf("3. Display (Hiển thị queue)\n");
        printf("4. Exit (Thoát)\n");
        printf("Chọn thao tác: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Nhập giá trị cần thêm: ");
                scanf("%d", &value);
                enqueue(value);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 4:
                printf("Thoát chương trình.\n");
                exit(0);
            default:
                printf("Lựa chọn không hợp lệ!\n");
        }
    }
    return 0;
}
