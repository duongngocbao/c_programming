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
    int x;
    int dem=0;
    printf("gia tri can kiem tra: ");
    scanf("%d",&x);
    for (int i =0 ; i<n ;i++){
        if (arr[i]==x){
            dem=dem+1;
        }

    }
    printf("so lan xuat hien cua phan tu %d la %d lan" ,x,dem);
return 0;
    



}
