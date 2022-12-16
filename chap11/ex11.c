// 2개의 정수를 입력받고 두 정수의 합을 계산하는 프로그램
#include <stdio.h>

void GetInt(int *px, int *py);

int main()
{
    int num1, num2;
    
    GetInt(&num1, &num2);
    
    printf("정수의 합은 %d\n", num1+num2);
    return 0;
}

void GetInt(int *px, int *py)
{
    printf("2개의 정수를 입력하시오: ");
    scanf("%d %d", px, py);
}