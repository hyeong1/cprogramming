// ���� �� �� �Է¹ް� �� ���� ���Ͽ� �����ϴ� add �Լ�
#include <stdio.h>

int add(int a, int b);

int main()
{
    int num1, num2;
    printf("���� �� �� �Է�: ");
    scanf("%d %d", &num1, &num2);

    printf("%d\n", add(num1, num2));

    return 0;
}

int add(int a, int b)
{
    return a + b;
}