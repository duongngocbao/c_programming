/*****************************************
 * Author: Duong Ngoc Bao
 * Date  : 18/02/2025
 * Desc  : Chương trình C đơn giản về gets
 *****************************************/

 #include <stdio.h>

int main() {
    char str[100];

    printf("Nhập một chuỗi: ");
    gets(str);  // Nhập chuỗi từ bàn phím

    printf("Chuỗi đã nhập: %s\n", str);

    return 0;
}
