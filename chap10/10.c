// 벡터 연산을 배열을 이용하여 작성
#include <stdio.h>

double VectorAdd(double x[], double y[], double z[]); // 2개의 백터를 더하는 함수
double VectorDotProd(double x[], double y[]); // 백터의 내적을 계산하는 함수
void PrintArr(double z[]);

int main()
{
    double x[3] = {1.0, 2.0, 3.0};
    double y[3] = {4.0, 5.0, 6.0};
    double add[3];

    VectorAdd(x, y, add);
    printf("벡터의 합: [");
    PrintArr(add);
    printf("]\n");

    printf("벡터의 내적: %lf\n", VectorDotProd(x, y));
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