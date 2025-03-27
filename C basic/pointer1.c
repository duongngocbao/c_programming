#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    
    //int *ptr = &(arr[0]);  // Con trỏ trỏ tới mảng

    int *ptr = arr; 

    for (int i = 0; i < 5; i++) {
        printf("%p \n ", (ptr + i));  // Truy xuất dia chi phần tử bằng con trỏ
       
    }
    for (int i = 0; i < 5; i++) {
        printf("%d ", *(ptr + i)); 
    }
    return 0;
}