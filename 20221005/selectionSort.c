// ���� ����
#include <stdio.h>

int main()
{
    int list[10] = {3, 2, 9, 7, 1, 4, 8, 0, 6, 5};
    int box, least;
    for (int i = 0;i < 10;i++)
    {
        least = i; // ó�� �ּҰ��� i(0) , ���ĵ� ��Ҵ� ����
        for (int j = i + 1;j < 10;j++) // ó�� j���� 1 (i(0)+1)
        {
            if (list[j] < list[least]) // �迭 ù ��° ��Һ��� ���� ����� ������ least�� ����
                least = j;
        }
        box = list[i]; 
        list[i] = list[least];
        list[least] = box;
    }
    for (int i = 0;i < 10;i++)
        printf("%d ", list[i]);
    printf("\n");
    return 0;
}