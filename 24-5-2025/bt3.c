#include <stdio.h>
#define MAX 100

int stack[MAX];
int top = -1;

void push(int value) {
    stack[++top] = value;
}

int peek() {
    if (top < 0) {
        printf("Stack rỗng!\n");
        return -1;
    }
    return stack[top];
}

int main() {
    push(5);
    push(8);
    printf("Phần tử trên cùng là: %d\n", peek());
    return 0;
}
