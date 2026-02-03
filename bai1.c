/******************************************************************************
 * Họ và tên: [TRẦN VĂN HUY]
 * MSSV:      [PS48688]
 * Lớp:       [COM108-CS21302]
 *****************************************************************************/

//  BÀI 1: XÂY DỰNG CHƯƠNG TRÌNH TÌM GIÁ TRỊ LỚN NHẤT TRONG 3 SỐ  
//  Input: Nhập từ bàn phím 3 số bất kỳ 
//  Output: Xuất ra màn hình số lớn nhất trong 3 số 
//  Hướng dẫn: Xây dựng hàm tìm giá trị lớn nhất trong 3 số. Hàm có giá trị trả về mà 
//  giá trị lớn nhất giữa 3 số 

#include <stdio.h>
float Max3(float a, float b, float c) {
    float max = a;
    if (b > max) max = b;
    if (c > max) max = c;
    printf("Số lớn nhất trong 3 số %.2f, %.2f, %.2f là: %.2f\n", a, b, c, max);
    return max;
}
float Min3(float a, float b, float c) {
    float min = a;
    if (b < min) min = b;
    if (c < min) min = c;
    printf("Số nhỏ nhất trong 3 số %.2f, %.2f, %.2f là: %.2f\n", a, b, c, min);
    return min;
}
int main() {
    float a, b, c;
    printf("Nhập số thứ nhất: ");
    scanf("%f", &a);
    printf("Nhập số thứ hai: ");
    scanf("%f", &b);
    printf("Nhập số thứ ba: ");
    scanf("%f", &c);
    Max3(a, b, c);
    Min3(a, b, c);
    return 0;
}    