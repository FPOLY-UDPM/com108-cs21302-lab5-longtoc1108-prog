/******************************************************************************
 * Họ và tên: [TRẦN VĂN HUY]
 * MSSV:      [PS48688]
 * Lớp:       [COM108-CS21302]
 *****************************************************************************/

//  BÀI 2: XÂY DỰNG HÀM TÍNH NĂM NHUẬN 
//  Input: Nhập vào năm 
//  Output: Có phải là năm nhuận hay không? 
//  Biết rằng: Năm nhuận là năm chia hết cho 400 hoặc chia hết cho 4 nhưng không 
//  chia hết cho 100 
 
#include <stdio.h>

//Tạo hàm 
void Kiem_tra_nam_nhuan(int nam, int *isLeap) {
    if ((nam % 400 == 0) || (nam % 4 == 0 && nam % 100 != 0)) {
        *isLeap = 1; // Năm nhuận
    } else {
        *isLeap = 0; // Không phải năm nhuận
    }
}
int main() {

    // //Gọi hàm trong hàm main 
    int nam, isLeap;
    printf("Nhập năm cần kiểm tra: ");
    scanf("%d", &nam);
    Kiem_tra_nam_nhuan(nam, &isLeap);
    if (isLeap == 1) {
        printf("Năm %d là năm nhuận.\n", nam);
    } else {
        printf("Năm %d không phải là năm nhuận.\n", nam);
    }
    
    return 0;
}

