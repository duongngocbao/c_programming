#include <stdio.h>
#define MAX 100

int stack[MAX];
int top = -1;

void push(int value) {
    stack[++top] = value;
}

void display() {
    if (top < 0) {
        printf("Stack rỗng!\n");
        return;
    }

    printf("Các phần tử trong stack: ");
    for (int i = 0; i <= top; i++) {
        printf("%d ", stack[i]);
    }
    printf("\n");
}

int main() {
    push(1);
    push(2);
    push(3);
    display();
    return 0;
}
