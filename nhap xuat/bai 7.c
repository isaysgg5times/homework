#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a;
    //Nhập số điểm
    printf("Nhap so diem:");
    scanf("%f",&a);
    //Kiểm tra
    if (a < 5) printf("Yeu");
    if (5<=a && a<7) printf("TB");
    if (7<=a && a<8) printf("Kha");
    if (8<=a && a<9) printf("Gioi");
    if (a>9) printf("Xuat sac");
    return 0;
}
