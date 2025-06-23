/*
NAME : Duong Ngoc Bao 
DATE : 15/3/2025

*/
#include<stdio.h>
int main(){
    int n;
    
    printf("Nhap vao so luong cua mang \n");
    scanf("%d",&n);
    int arr[n];
    for (int i=0 ;i< n;i++){
        printf("nhap phan tu thu %d ", i);
        scanf ("%d",& arr[i]);
    }
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++){
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }}}
    printf("mang xuat ra: \n");
    for(int i =0; i<n; i++){
        printf("%d \n",arr[i]);
    }
return 0;
}

