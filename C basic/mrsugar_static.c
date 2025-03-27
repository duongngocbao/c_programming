/*********************
 * Author: mrsugar (Bao)
 * Date  : 18/02/2025
 * Desc  : static
 */



 #include <stdio.h>

 // Một biến static toàn cục: 
 // Biến này chỉ có hiệu lực trong file hiện tại (internal linkage)
 // và không thể được truy cập từ các file khác trong cùng dự án.
 static int file_static_var = 100;
 
 /*****************************************
  * Hàm count_calls() minh họa cách sử dụng biến static cục bộ.
  *
  * Biến static 'count' được khởi tạo chỉ một lần duy nhất khi chương trình
  * chạy, sau đó giữ lại giá trị giữa các lần gọi hàm.
  *****************************************/
 void count_calls() {
     // Khai báo biến static cục bộ với giá trị khởi tạo là 0.
     // Lưu ý: Nếu không có từ khóa static, biến 'count' sẽ được khởi tạo lại về 0 mỗi khi hàm được gọi.
     static int count = 0;
     
     count++;  // Tăng giá trị của 'count' mỗi khi hàm được gọi.
     
     // In ra số lần hàm được gọi (giá trị của biến count).
     printf("Hàm count_calls() đã được gọi %d lần\n", count);
     printf("Giá trị của file_static_var: %d\n", file_static_var);
    
 }
 
 int main() {
     // In ra giá trị của biến static toàn cục
     printf("Giá trị của file_static_var: %d\n", file_static_var);
     
     // Gọi hàm count_calls() nhiều lần để chứng minh biến static giữ giá trị giữa các lần gọi.
     count_calls();  // Lần gọi 1: count được tăng từ 0 lên 1
     count_calls();  // Lần gọi 2: count giữ giá trị 1, sau đó tăng lên 2
     count_calls();  // Lần gọi 3: count giữ giá trị 2, sau đó tăng lên 3
    
 
     return 0;
 }