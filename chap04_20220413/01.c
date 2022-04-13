#include <stdio.h>

int main()
{
    //사용자로부터 하나의 실수를 입력받아서 소수점 표기 방법과 지수 표기 방법으로 동시 출력

    double number;
    printf("실수를 입력하시오: ");
    scanf("%lf", &number);

    printf("실수형식으로는 %lf입니다.\n", number);
    printf("지수형식으로는 %e입니다.", number);

    return 0;
}
