#include <stdio.h>

int main() {
    double h1, l1, l2, h2;
    printf("�������� ���̸� �Է��Ͻÿ�: ");
    scanf("%lf", &h1);
    printf("������ �׸����� ���̸� �Է��Ͻÿ�: ");
    scanf("%lf", &l1);
    printf("�Ƕ�̵������ �Ÿ��� �Է����ÿ�: ");
    scanf("%lf", &l2);

    h2 = (h1 * l2) / l1;
    printf("�Ƕ��̵��� ���̴� %lf�Դϴ�.", h2);

    return 0 ;
}