// 9���� ���� �ٸ� �ڿ����� �Է¹޾� �ִ��� ã��, �ִ��� �� ��° ������ ���
// �ִ� ����, �ִ� ã�� ��� �ش� �ε��� ����� ����
#include <stdio.h>

int main()
{
    int num[9], max, maxIndex; // ���� �迭, �ִ� ����, �ִ� ������ �ε���
    for (int i = 0;i < 9;i++)
        scanf("%d", &num[i]);

    max = num[0];
    for (int i = 0;i < 9;i++)
    {
        if (max < num[i]) // �ִ����� ������ ���� num[i]���� ������
        {
            max = num[i]; // �ִ� num[i]�� ��ü
            maxIndex = i; // �ִ� �ε����� i ����
        }
    }

    printf("�ִ� %d�� %d��° ��\n", max, maxIndex+1); // ����� �� �ε���+1

    return 0;
}