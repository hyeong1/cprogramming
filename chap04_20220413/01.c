#include <stdio.h>

int main()
{
    //����ڷκ��� �ϳ��� �Ǽ��� �Է¹޾Ƽ� �Ҽ��� ǥ�� ����� ���� ǥ�� ������� ���� ���

    double number;
    printf("�Ǽ��� �Է��Ͻÿ�: ");
    scanf("%lf", &number);

    printf("�Ǽ��������δ� %lf�Դϴ�.\n", number);
    printf("�����������δ� %e�Դϴ�.", number);

    return 0;
}
