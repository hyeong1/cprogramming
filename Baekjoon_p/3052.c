// �迭�� ���� �ٸ� ���� ����� ���
#include <stdio.h>

int main()
{
    int a[6] = {0, 0, 1, 1, 2, 2}; // ���ϴ� ��� -> 3 ����ϱ�
    int count[3], index, repeatN; // �ߺ� Ƚ�� üũ�� �迭, ī���� �迭 �ε���, �ߺ��� ���� ���� ���� ����
    repeatN = 0;
    for (int i = 0;i < 6;i++)
    {
        index = a[i];
        count[index]++;
    }
    for (int i = 0;i < 3;i++)
    {
        if (count[i] > 2)
            repeatN++;
    }
    printf("%d\n", repeatN);
    return 0;
}