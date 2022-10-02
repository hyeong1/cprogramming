// ���� ������ �迭�� �̿��Ͽ� �ۼ�
#include <stdio.h>

double VectorAdd(double x[], double y[], double z[]); // 2���� ���͸� ���ϴ� �Լ�
double VectorDotProd(double x[], double y[]); // ������ ������ ����ϴ� �Լ�
void PrintArr(double z[]);

int main()
{
    double x[3] = {1.0, 2.0, 3.0};
    double y[3] = {4.0, 5.0, 6.0};
    double add[3];

    VectorAdd(x, y, add);
    printf("������ ��: [");
    PrintArr(add);
    printf("]\n");

    printf("������ ����: %lf\n", VectorDotProd(x, y));
    return 0;
}

double VectorAdd(double x[], double y[], double z[])
{
    for (int i = 0;i < 3;i++)
        z[i] = x[i] + y[i];
}

double VectorDotProd(double x[], double y[])
{
    double dot = 0;
    for (int i = 0;i < 3;i++)
        dot += x[i] * y[i];
    return dot;
}

void PrintArr(double z[])
{
    for (int i = 0;i < 3;i++)
        printf(" %lf ", z[i]);
}