// sin() �Լ� ����Ͽ� 0������ 180������ 10�� ������ ���� �Լ� �� ���
// ������ �޾Ƽ� ���ΰ��� ��ȯ�ϴ� �Լ� sin_degree(double degree) �ۼ�
// sin() �Լ� ����
#include <stdio.h>
#include <math.h>

double sin_degree(double degree);

int main()
{
    for (int i = 0;i <= 180;i += 10)
    {
        printf("sin(%d)�� ���� %lf\n", i, sin_degree(i));
    }

    return 0;
}

double sin_degree(double degree)
{
    return sin(degree);
}