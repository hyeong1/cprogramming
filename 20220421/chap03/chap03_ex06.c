#include <stdio.h>

int main()
{
    double weightE, weightM;
    printf("�����Ը� �Է��ϼ���: ");
    scanf("%lf", &weightE);

    weightM = weightE * 0.17;
    printf("�޿����� �����Դ� %lf�Դϴ�.", weightM);

    return 0;
}