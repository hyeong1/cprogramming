#include <stdio.h>

int main()
{
    int num1, num2, num3;
    
    printf("실수를 입력하시오: ");
    scanf("%d", &num1);
    printf("실수를 입력하시오: ");
    scanf("%d", &num2);
    printf("실수를 입력하시오: ");
    scanf("%d", &num3);

    double sum, avg;
    sum = num1 + num2 + num3;
    avg = sum / 3;
    printf("합은 %lf이고 평균은 %lf입니다.\n", sum, avg);


    return 0;
}