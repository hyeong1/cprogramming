#include <stdio.h>

int main() {
    double h1, l1, l2, h2;
    printf("지팡이의 높이를 입력하시오: ");
    scanf("%lf", &h1);
    printf("지팡이 그림자의 길이를 입력하시오: ");
    scanf("%lf", &l1);
    printf("피라미드까지의 거리를 입려가시오: ");
    scanf("%lf", &l2);

    h2 = (h1 * l2) / l1;
    printf("피라이드의 높이는 %lf입니다.", h2);

    return 0 ;
}