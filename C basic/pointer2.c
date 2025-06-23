#include<stdio.h>
int main(){
    int arr[]= {2,4,6,8,10};
    int *ptr = arr;
    int sum = 0;
    for(int i=0;i<5;i++){
       sum = sum + *(ptr + i);
    }
    printf("TONG CAC PHAN TU : %d \n ",sum);
    return 0;

}