// ���ڷ� ���� �ϳ� �Է¹޾� ������ŭ *���
#include <stdio.h>

void printStar(int num);

int main()
{
    int num;
    printf("���� �Է�: ");
    scanf("%d", &num);

    printStar(num);

    return 0;
}

void printStar(int num) 
{
    for (int i = 0;i < num;i++)
        printf("*");
}