// 2���� ������ �հ� ���� ���ÿ� ��ȯ�ϴ� �Լ��� �ۼ��ϰ� �׽�Ʈ�϶�
#include <stdio.h>

void GetSumDiff(int x, int y, int *pSum, int *pDiff);

int main()
{
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    GetSumDiff(num1, num2, &num1, &num2);

    printf("���ҵ��� ��: %d\n���ҵ��� ��: %d\n", num1, num2);
    return 0;
}

void GetSumDiff(int x, int y, int *pSum, int *pDiff)
{
    *pSum = x + y;
    *pDiff = x - y;
}
