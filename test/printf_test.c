#include <stdio.h>

int main()
{
    double dollar, price, back, twenty_five, ten, five, one, c;
    int bill;

    printf("물건 가격을 입력하시오:  ");
    scanf("%lf", &price);

    printf("지불한 가격을 입력하시오:  ");
    scanf("%lf", &dollar);

    back = dollar - price; // 총 거스름돈
    bill = back;           // 1달러 거스름돈 가격
    c = back - bill;       // 동전 거스름돈 가격

    twenty_five = (back - bill) / 0.25;                                          // 25센트 개수
    ten = (c - (twenty_five * 0.25)) / 0.1;                                      // 10센트 개수
    five = (c - (twenty_five * 0.25) - (ten * 0.10)) / 0.05;                     // 5센트 개수
    one = (c - ((int)twenty_five * 0.25) - (ten * 0.10) - (five * 0.05)) / 0.01; // 1센트 개수

    printf("거스름돈은 %.2lf입니다.\n\n달러:%d개\n25센트: %.0lf개\n10센트: %.0lf개\n5센트: %.0lf개\n1센트: %.0lf개", back, bill, twenty_five, ten, five, one);

    return 0;
}