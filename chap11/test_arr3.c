// ���� 10�� �Է¹ް�, �̸� 42�� ���� �������� ���Ѵ�.
// �� ���� ���� �ٸ� ���� �� �� �ִ��� ���
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dataN = 10, check[42] = {0}, checkNum = 0; // �Է��� ���� ����, 42�� ���� ������ �迭, ���� �ٸ� ������ ���� üũ
    int *data = (int *)calloc(sizeof(int), dataN); // dataN ũ�⸸ŭ �����Ҵ�
    for (int i = 0; i < dataN; i++)
        scanf("%d", &data[i]); // dataN�� ���� �Է� �ޱ�

    for (int i = 0; i < dataN; i++)
    {
        *(data + i) %= 42; // �Է� ���� ������ 42�� ���� ������ ���ϱ�
        check[*(data + i)]++;
    }

    for (int i = 0; i < 42; i++)
    {
        if (check[i] > 0) // ������ üũ�� �迭 ��ҿ��� ���� 0 �̻��̸�
            checkNum++;   // ���� �ٸ� ������ ���� üũ�ϴ� ������ +1
    }

    printf("%d\n", checkNum);

    return 0;
}