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
    int tong=0;
    for (int i=0;i<n;i++){
        if (arr[i]%2==0){
        tong = tong + arr[i];
    }}
    printf (" tong cua cac phan tu trong mang la: %d \n", tong);
    return 0;



}