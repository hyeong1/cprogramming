// ���� �Է¹޾Ƽ� �����Ͽ� ��ȯ�ϴ� �Լ� ���α׷�
#include <stdio.h>

double square(double num);

int main()
{
    double num;
    printf("������ �Է��Ͻÿ�: ");
    scanf("%lf", &num);

    double squareNum = square(num);
    printf("�־��� ���� %lf�� ������ %lf�Դϴ�.\n", num, squareNum);

    return 0;
}

double square(double num)
{
    double result = num * num;

    return result;
}