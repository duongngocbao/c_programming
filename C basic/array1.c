/*
NAME : Duong Ngoc Bao 
DATE : 15/3/2025

*/
#include<stdio.h>
int main() {
    int n;
    int arr[n];

    printf("Nhap so phan tu: ");
    scanf("%d", &n);

    
    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }
   
    printf("Cac phan tu trong mang: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);  
    }
    

    return 0;
}
