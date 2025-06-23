#include <stdio.h>
#define MAX 100

int stack[MAX];
int top = -1;

void push(int value) {
    if (top >= MAX - 1) {
        printf("Stack bị đầy!\n");
        return;
    }
    top++;
    stack[top] = value;
    printf("Đã thêm %d vào stack\n", value);
}

int main() {
    push(10);
    push(20);
    push(30);
    return 0;
}
