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
    int solonnhat = arr[0];
    for (int i=1;i<n;i++){
        if (arr[i]>arr[0]){
            solonnhat = arr[i];
        }}
    printf ("so lon nhat cua cua mang la: %d",solonnhat);
    
    return 0;


}