#include <stdio.h>

int main()
{
    int m, y;
    int maxday;
    //Nhập tháng,năm
    printf("Nhap thang:");
    scanf("%d",&m);
    printf("Nhap nam:");
    scanf("%d",&y );
    //kiểm tra
    if(y > 0 && m >= 1 && m <= 12)
    {
        if (m ==2)
        {
            if (y % 400 == 0 || (y % 4 == 0 && y % 100 != 0))
            {
                maxday = 29;
            }
            else
            {
                maxday = 28;
            }
        }
        else if(m==4||m==6||m==9||m==11)
        {
            maxday= 30;
        }
        else
        {
            maxday=31;
        }
    }
    //in kết quả
    printf("Thang %d nam %d co %d ngay",m,y,maxday);
    return 0;
}
