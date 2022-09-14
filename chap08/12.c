// 인수의 값만큼 별표 문자를 출력하는 함수 print_value(int n) 작성
// 사용자가 음수를 입력하면 반복 중단
#include <stdio.h>

void print_value(int n);

int main()
{
    int inputN;
    do
    {
        printf("값을 입력하시오(종료는 음수): ");
        scanf("%d", &inputN);

        print_value(inputN);
    } while (inputN > 0);
        
    return 0;
}

void print_value(int n)
{
    for (int i = 0;i < n;i++)  
        printf("*");
    printf("\n");
}