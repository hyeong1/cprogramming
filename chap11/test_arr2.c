// 9���� ���� �ٸ� �ڿ����� �־��� ��, �̵� �� �ִ��� ã��, �� �ִ��� �� ��° ������
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dataN = 9, max, maxIndex;
    int *data = (int *)calloc(sizeof(int), dataN);
    for (int i = 0; i < dataN; i++)
        scanf("%d", &data[i]);

    max = *data;
    for (int i = 1; i < dataN; i++)
    {
        if (max < *(data + i))
        {
            max = *(data + i);
            maxIndex = i + 1; // �ִ� �ε���+1 -> 1������ ������ �� ��° ��
        }
    }
    printf("%d %d\n", maxIndex, max);

    return 0;
}