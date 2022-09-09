// 반올림 연산을 수행하는 함수를 작성하고 테스트하라
#include <stdio.h>

double round(double f);

int main()
{
    double input;    // 입력한 수 저장하는 변수
    int inputRound;  //입력한 수 반올림 한 결과 저장 변수 선언

    printf("실수를 입력하시오: ");
    scanf("%lf", &input);

    inputRound = round(input);

    printf("반올림한 값은 %d입니다.\n", inputRound);

    return 0;
}

// 실수를 정수로 변환하여 소수점 이하는 잘라 없애고 0.5를 더해 반올림 연산을 수행한다.
double round(double f)
{
    int doubleToInt = (int)(f + 0.5);
    return doubleToInt;
}