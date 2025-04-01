#include <stdio.h>
#include <stdlib.h>
int *parr = NULL;
int main() {
    int n;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    int *arr = (int*) malloc(n * sizeof(int)); // Cấp phát động
    // tang phan tu
    if (arr == NULL) {
        printf("Loi cap phat bo nho!\n");
        return 1;
    }

    // Nhập mảng
    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Xuất mảng
    printf("Mang vua nhap: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    free(arr); // Giải phóng bộ nhớ
    return 0;
}
