#include <stdio.h>

int main()
{
    double dollar, price, back, twenty_five, ten, five, one, c;
    int bill;

    printf("���� ������ �Է��Ͻÿ�:  ");
    scanf("%lf", &price);

    printf("������ ������ �Է��Ͻÿ�:  ");
    scanf("%lf", &dollar);

    back = dollar - price; // �� �Ž�����
    bill = back;           // 1�޷� �Ž����� ����
    c = back - bill;       // ���� �Ž����� ����

    twenty_five = (back - bill) / 0.25;                                          // 25��Ʈ ����
    ten = (c - (twenty_five * 0.25)) / 0.1;                                      // 10��Ʈ ����
    five = (c - (twenty_five * 0.25) - (ten * 0.10)) / 0.05;                     // 5��Ʈ ����
    one = (c - ((int)twenty_five * 0.25) - (ten * 0.10) - (five * 0.05)) / 0.01; // 1��Ʈ ����

    printf("�Ž������� %.2lf�Դϴ�.\n\n�޷�:%d��\n25��Ʈ: %.0lf��\n10��Ʈ: %.0lf��\n5��Ʈ: %.0lf��\n1��Ʈ: %.0lf��", back, bill, twenty_five, ten, five, one);

    return 0;
}