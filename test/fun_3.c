// �Ӵ��, ��꼼, �����, �޿� �� ���� ��� A ����
// ����, �ΰǺ� �� ���� ��� B ����
// ��Ʈ�� ���� C ����
// �� ����(�Ǹź��) > �� ���(���� ��� + ���� ���) --> ���� ����: ���ͺб���
// A, B, C�� �־����� ��, ���ͺб����� ���ϴ� ���α׷� �Լ��� �ۼ�
#include <stdio.h>
int findBEP(int A, int B, int C);

int main()
{
    int A, B, C;
    printf("�������, �������, ���� �Է�: ");
    scanf("%d %d %d", &A, &B, &C);

    printf("%d\n", findBEP(A, B, C));

    return 0;
}

int findBEP(int A, int B, int C)
{
    int cost, income, sell; // �� ���, �� ����, �Ǹ� ���� ���� ����
    sell = 0;

    if (B >= C) // ���ͺб����� �������� ������ -1 ���
        return -1;
    else
    {
        do
        {
            cost = A + (B * sell);
            income = C * sell;
            
            sell++; // sell �ϳ��� �ø��鼭 cost, income ���
        } while (cost > income); // cost < income�� �����ϸ� �ݺ��� �����ϰ� sell�� ����
    }

    return sell;
}