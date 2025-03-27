/******************************
 * Author: mrsugar(BAO)
 * Date  : 18/02/2025
 * Desc  :switch
 */
#include <stdio.h>

#define BEGIN_OF_DATE 1

enum date_of_week{
    MONDAY = BEGIN_OF_DATE ,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY,
    SUNDAY
};
int main (){
    int day = SATURDAY;

    switch(day){
        case MONDAY:
            printf("Hôm nay là thứ Hai\n");
            break;
        case 2:
            printf("Hôm nay là thứ Ba\n");
            break;
        case 3:
            printf("Hôm nay là thứ Tư\n");
            break;
        case 4:
            printf("Hôm nay là thứ Năm\n");
            break;
        case 5:
            printf("Hôm nay là thứ Sáu\n");
            break;
        case 6:
            printf("Hôm nay là thứ Bảy\n");
            break;
        case 7:
            printf("Hôm nay là Chủ Nhật\n");
            break;
        default:
            printf("Giá trị không hợp lệ!\n");


    }
    return 0;
}






