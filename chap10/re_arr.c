// �迭 �Ųٷ� ����ϱ�
#include <stdio.h>

int main()
{
    int num[7]; // 7���� ���ڸ� �Է¹ް� �Ųٷ� ����ϱ�
    for (int i = 0;i < 7;i++)
        scanf("%d", &num[i]);

    for (int i = 6;i >= 0;i--)
        printf("%d ", num[i]);
    printf("\n");
    return 0;
}