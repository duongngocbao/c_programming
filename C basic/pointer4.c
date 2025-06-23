#include<stdio.h>
int main() {
    int arr[] = {5, 2, 9, 1, 6};
    int *ptr = arr;
    
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4 - i; j++) {
            if (*(ptr + j) > *(ptr + j + 1)) {
                int max = *(ptr + j);
                *(ptr + j) = *(ptr + j + 1);
                *(ptr + j + 1) = max;
            }
        }
    }

    for (int i = 0; i < 5; i++) {
        printf("%d ", *(ptr + i));
    }

    return 0;
}
