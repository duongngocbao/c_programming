#include <stdio.h>
#define MAX 100

int stack[MAX];
int top = -1;

void push(int value) {
    if (top >= MAX - 1) return;
    stack[++top] = value;
}

int pop() {
    if (top < 0) {
        printf("Stack rỗng!\n");
        return -1;
    }
    int val = stack[top];
    top--;
    return val;
}

int main() {
    push(10);
    push(20);
    int popped = pop();
    printf("Đã lấy ra: %d\n", popped);
    return 0;
}
