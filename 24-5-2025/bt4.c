#include <stdio.h>
#define MAX 100

int stack[MAX];
int top = -1;

int isEmpty() {
    return top == -1;
}

int main() {
    if (isEmpty()) {
        printf("Stack hiện đang rỗng\n");
    } else {
        printf("Stack có phần tử\n");
    }

    // thử push rồi kiểm tra lại
    stack[++top] = 42;

    if (isEmpty()) {
        printf("Stack hiện đang rỗng\n");
    } else {
        printf("Stack có phần tử\n");
    }

    return 0;
}
