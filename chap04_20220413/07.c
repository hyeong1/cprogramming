#include <stdio.h>

int main()
{
    //������� E = m * v^2 / 2.0
    //����ڷκ��� ����m�� �ӵ�v�� �Է¹޾Ƽ� E�� ����ϴ� ���α׷�
    //��� ������ double�� ���
    double kenergy, mass, speed;

    printf("����(kg): ");
    scanf("%lf", &mass);
    printf("�ӵ�(m/s): ");
    scanf("%lf", &speed);

    // kenergy = 0.5 * mass * speed * speed;
    kenergy = (mass * speed * speed) / 2.0;
    printf("�������(J): %lf", kenergy);

    return 0;
}