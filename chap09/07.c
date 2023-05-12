// 순환 호출로 정수의 각 자리수를 출력하는 함수를 작성하고 테스트
// 1234 입력 시 출력 1 2 3 4
#include <stdio.h>

void ShowDigit(int x);

int main()
{
    int num;
    printf("정수를 입력하시오: ");
    scanf("%d", &num);

    ShowDigit(num);

    return 0;
}
/*
void ShowDigit(int x)
{
    if (x > 10)
    {
        ShowDigit(x / 10);
        printf("%d ", x % 10);
    }
    else
        printf("%d ", x);
}*/
void ShowDigit(int x)
{
    if (x > 10)
        ShowDigit(x / 10); // 몫 순환호출
    printf("%d ", x % 10);
}