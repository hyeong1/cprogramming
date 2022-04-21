#include <stdio.h>

int main()
{
    //16진수 입력받아서 8진수, 10진수, 16진수 형태로 출력
    int hexa;
    printf("16진수 정수를 입력하시오: ");
    scanf("%x", &hexa);

    printf("8진수로는 %#o입니다.\n", hexa);
    printf("10진수로는 %d입니다.\n", hexa);
    printf("16진수로는 %#x입니다.", hexa);

    return 0;
}