// Ȧ���� ¦�� �����ؼ� ����ϱ�
#include <stdio.h>

int main()
{
    int num[6]; // 6���� ���� �Է¹ޱ�
    for (int i = 0; i < 6; i++)
        scanf("%d", &num[i]);

    // Ȧ�� ���
    for (int i = 0; i < 6; i++)
    {
        if (num[i] % 2) // 2�� ���� �������� 0�� �ƴϸ� Ȧ�� (0�� �ƴϸ� true�ϱ� if�� ����)
            printf("%d ", num[i]);
    }
    printf("\n");
    // ¦�� ���
    for (int i = 0; i < 6; i++)
    {
        if (!(num[i] % 2)) // 2�� ���� �������� 0�̸� ¦�� (0�̸� �����ϵ��� !0)
            printf("%d ", num[i]);
    }
    return 0;
}