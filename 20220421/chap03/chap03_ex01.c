#include <stdio.h>

int main()
{
    int num1, num2, num3;
    
    printf("�Ǽ��� �Է��Ͻÿ�: ");
    scanf("%d", &num1);
    printf("�Ǽ��� �Է��Ͻÿ�: ");
    scanf("%d", &num2);
    printf("�Ǽ��� �Է��Ͻÿ�: ");
    scanf("%d", &num3);

    double sum, avg;
    sum = num1 + num2 + num3;
    avg = sum / 3;
    printf("���� %lf�̰� ����� %lf�Դϴ�.\n", sum, avg);


    return 0;
}