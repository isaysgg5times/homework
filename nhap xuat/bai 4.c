#include <stdio.h>
#include <math.h>

int main() {
    float r,s,v;
    float pi = 3.14159;
    //nhap
    printf("Nhap ban kinh hinh cau: ");
    scanf("%f", &r);
    // Tinh dien tich va the tich
    s = 4 * pi * r * r;
    v = (4.0 / 3) * pi * pow(r, 3);
    // Xuat ket qua
    printf("Dien tich hinh cau: %.2f\n", s);
    printf("The tich hinh cau: %.2f\n", v);
    return 0;
}
