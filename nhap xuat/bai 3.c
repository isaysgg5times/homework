#include <stdio.h>

int main() {
    int a, b;
    int tong, hieu, tich, thuong, du;
  //nhap so nguyen
    printf("Nhap so nguyen thu nhat: ");
    scanf("%d", &a);
    printf("Nhap so nguyen thu hai: ");
    scanf("%d", &b);
  //tinh toan
    tong = a + b;
    hieu = a - b;
    tich = a * b;
    if (b != 0) {
        thuong = a / b;
        du = a % b;
    } else {
        printf("Khong the chia cho so 0.\n");
        return 1;
    }

    // Xuat ket qua
    printf("Tong: %d + %d = %d\n", a, b, tong);
    printf("Hieu: %d - %d = %d\n", a, b, hieu);
    printf("Tich: %d * %d = %d\n", a, b, tich);
    printf("Thuong: %d / %d = %d\n", a, b, thuong);
    printf("Du: %d %% %d = %d\n", a, b, du);
    return 0;
}
