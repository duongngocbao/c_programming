/*****************************************
 * Author: mrsugar (Bao)
 * Date  : 18/02/2025
 * Desc  : Chương trình C đơn giản về toán tử số học và toán tử so sánh
 *****************************************/


#include <stdio.h>

int main (){
    int a=10;
    int b=3;

    int tong    = ( a + b);
    int hieu    =   (a-b);
    int tich    = (a * b);
    int thuong  = (a / b);  
    int du      = (a % b);

    int lonhon = (a>b);
    int nhohon = (a<b);
    int lonhonbang = (a>=b);
    int nhohonbang = (a<=b);
    int bangnhau = (a==b);

    int khacnhau = ( a!=b);

    //Xuat ket qua 
    printf("tong: %d\n ",tong);
    printf("Hieu: %d\n",hieu);
    printf ("tich: %d\n", tich);
    printf ("thuong: %d\n",thuong);
    printf ("du: %d\n",du);
    // xuat ke qua so sanh
    printf ("a>b :%d\n",lonhon);
    printf ("a<b: %d\n",nhohon);
    printf("a >= b: %d\n", lonhonbang);
    printf("a <= b: %d\n", nhohonbang);
    printf("a == b: %d\n", bangnhau);
    printf("a != b: %d\n", khacnhau);
    
    return 0;

}



