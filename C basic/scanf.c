/*****************************************
 * Author: Duong Ngoc Bao
 * Desc  : Chương trình C đơn giản về scanf
 *****************************************/

#include <stdio.h>

int main() {
    int a;
    float b;
    char c;
    char str[100];

    // Nhập số nguyên
    printf("Nhập một số nguyên: ");
    scanf("%d", &a);
    
    // Nhập số thực
    printf("Nhập một số thực: ");
    scanf("%f", &b);
    
    // Nhập ký tự
    printf("Nhập một ký tự: ");
    scanf(" %c", &c);  // Lưu ý khoảng trắng trước %c để bỏ qua ký tự newline
     
    // Nhập chuỗi
    printf("Nhập một chuỗi: ");
    scanf("%s", str);
    
    // Hiển thị kết quả
    printf("Số nguyên đã nhập: %d\n", a);
    printf("Số thực đã nhập: %.2f\n", b);
    printf("Ký tự đã nhập: %c\n", c);
    printf("Chuỗi đã nhập: %s\n", str);

    return 0;
}
