// �ҵ漼 ����ϴ� �Լ� get_tax(int income) �ۼ��ϰ� �׽�Ʈ
// ��ǥ ������ 1000���� ���� 8%, 1000���� �ʰ��� 10%�� ����
#include <stdio.h>

int get_tax(int income);

int main()
{
    int income;
    printf("�ҵ��� �Է��Ͻÿ�(����): ");
    scanf("%d", &income);

    printf("�ҵ漼�� %d�Դϴ�.\n", get_tax(income));

    return 0;
}

int get_tax(int income)
{
    if (income <= 1000) // �ҵ��� 1000���� ���ϸ� �ҵ� * 0.08 ��ȯ
        return (income * 0.08);
    else // �ҵ��� 1000���� �ʰ��� 1000���������� *0.08, 1000���� �ʰ� �ݾ��� *0.1 ����ؼ� �� ����� ���� �� ��ȯ
        return ((1000 * 0.08) + ((income - 1000) * 0.1));
}