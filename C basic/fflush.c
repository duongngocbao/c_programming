/*****************************************
 * Author: Duong Ngoc Bao
 * Date  : 18/02/2025
 * Desc  : Chương trình C đơn giản về fflush
 *****************************************/
#include <stdio.h>

// int main() {
//     char str[100];
//     char sdt[100];

//     int tuoi = 0;
//     printf("Nhap ten: ");
//     gets(str);  // Nhập chuỗi từ bàn phím
//     printf("Nhap tuoi: ");
//     scanf("%d",&tuoi);
//     while(getchar() != '\n');
//     printf("Nhap sdt: ");
//     gets(sdt);  // Nhập chuỗi từ bàn phím    

//     printf("ten da nhap %s, tuoi da nhap %d, sdt %s",str,tuoi,sdt);
//     return 0;
// }
// #include <stdio.h>

int main () {
    char sdt[100];
    char str[100];
    //char tuoi1[100];

    int tuoi = 0;


    printf("Nhap ten: ");
    gets(str); 

    printf("Nhap tuoi: ");
    scanf("%d", &tuoi);
    //gets(tuoi1);
    while(getchar() != '\n');
    fflush(stdin);

    printf("Nhap sdt: ");
    gets(sdt);

    printf("Ten da nhap: %s, Tuoi da nhap: %d, Sdt da nhap: %s", str,tuoi,sdt);

    //printf("Ten da nhap: %s, Tuoi da nhap: %s, Sdt da nhap: %s",str,tuoi1,sdt );

    return 0;
}