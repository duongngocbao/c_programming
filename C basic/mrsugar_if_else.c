/*****************************************
 * Author: mrsugar
 * Date  : 18/02/2025
 * Desc  : Chương trình C đơn giản về câu lệnh điều kiện và rẽ nhánh
 *****************************************/
#include  <stdio.h>

int main (){
    int a =10,b=5;
    // cau lenh if
    if (a>b) {
        printf (" a lon hon b \n");
    }
    // cau leh if - else
    if (a%2== 0){
        printf ("a la so chan \n ");
    }
    else {
        printf("a la so le \n");
    
    }

    // cau lenh else if
    int score = 85 ;
    if (score >= 90) {
        printf ("Xep loai A\n");
    }
    else if (score >= 70){
        printf ("xep loai B \n");
    }
    else{
        printf ("xe loai C\n");

    }
    return 0;

}