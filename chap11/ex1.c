// 2���� ������ �հ� ���� ���ÿ� ��ȯ�ϴ� �Լ��� �ۼ��ϰ� �׽�Ʈ�϶�
// ������ �Ű������� ����Ѵ�.
#include <stdio.h>

void GetSumDiff(int num1, int num2, int *pSum, int *pDiff);

int main()
{
    int num1 = 500, num2 = 200, sum, diff;
    GetSumDiff(num1, num2, &sum, &diff);
    printf("���ҵ��� ��=%d\n", sum);
    printf("���ҵ��� ��=%d\n", diff);

    return 0;
}

void GetSumDiff(int num1, int num2, int *pSum, int *pDiff)
{
    *pSum = num1 + num2;  // pSum�� ����Ű�� ���� ���ҵ��� �� ����
    *pDiff = num1 - num2; // pDiff�� ����Ű�� ���� ���ҵ��� �� ����
}