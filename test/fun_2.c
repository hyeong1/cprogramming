// 인자로 정수 하나 입력받아 정수만큼 *출력
#include <stdio.h>

void printStar(int num);

int main()
{
    int num;
    printf("정수 입력: ");
    scanf("%d", &num);

    printStar(num);

    return 0;
}

void printStar(int num) 
{
    for (int i = 0;i < num;i++)
        printf("*");
}