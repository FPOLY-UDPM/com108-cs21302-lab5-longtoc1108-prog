/******************************************************************************
 * Họ và tên: [TRẦN VĂN HUY]
 * MSSV:      [PS48688]
 * Lớp:       [COM108-CS21302]
 *****************************************************************************/

//  BÀI 3: XÂY DỰNG HÀM HOÁN VỊ 
//  Input: Nhập vào từ bàn phím 2 giá trị a,b 
//  Output: hoán vị 2 giá trị của a và b 
//  Hướng dẫn thực hiện: 
//  Xây dựng hàm hoán vị sử dụng con trỏ và gọi hàm theo tham chiếu 

#include <stdio.h>

//Tạo hàm 
void Hoan_vi(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {

    // //Gọi hàm trong hàm main 
    int a = 5, b = 10;
    Hoan_vi(&a, &b);
    printf("a = %d, b = %d\n", a, b);
    
    return 0;
}

