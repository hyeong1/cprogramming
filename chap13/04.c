// ����ü �������� 4
// ���Ҽ��� �����ϰ� ���Ҽ� ������ �����ϴ� �Լ� �ۼ� �� �׽�Ʈ
#include <stdio.h>

typedef struct complex // ���Ҽ� ����ü ����
{
    double real;
    double imag;
}COMPLEX;

COMPLEX ComplexAdd(COMPLEX c1, COMPLEX c2); // ���Ҽ� ���� ����

int main()
{
    COMPLEX ex1, ex2; // ex1 = 3+i, ex2 = 2+2i
    ex1.real = 3;
    ex1.imag = 1;
    ex2.real = 2;
    ex2.imag = 2;
    ComplexAdd(ex1, ex2);

    return 0;
}

COMPLEX ComplexAdd(COMPLEX c1, COMPLEX c2)
{
    COMPLEX sum; // ���ϴ� ����ü
    sum.real = c1.real + c2.real; // �ڿ��� �κ� ���ϱ�
    sum.imag = c1.imag + c2.imag; // ��� �κ� ���ϱ�

    // ��� ���
    printf("%lf + %lfi\n", c1.real, c1.imag);
    printf("%lf + %lfi\n", c2.real, c2.imag);
    printf("%lf + %lfi\n", sum.real, sum.imag);
}