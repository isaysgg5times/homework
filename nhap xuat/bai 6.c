#include <stdio.h>
#include <stdlib.h>

int main()
{
    double a,b,c,d,e,f,x,y;
    printf("Nhap he so a,b,c:");
    scanf("%lf %lf %lf",&a,&b,&e);
    printf("Nhap he so d,e,f:");
    scanf("%lf %lf %lf",&c,&d,&f);
    float D = a * d - b * c;
    float D1 = e * d - b * f;
    float D2 = a * f - e * c;
    if (D == 0) {
        if (D1 + D2 == 0)
            printf("He phuong trinh co vo so nghiem");
        else
            printf("He phuong trinh vo nghiem");
    }
    else {
        x = D1 / D;
        y = D2 / D;
        printf("He phuong trinh co nghiem duy nhat\n");
        printf("x = %.5lf\n",x);
        printf("y = %.5lf\n",y);
    }
    return 0;
}
