// ��������
#include <stdio.h>

int main()
{
    int list[10] = {5, 6, 7, 8, 9, 1, 2, 10, 3, 4};
    int size, temp, least;
    size = 10;
    // ���� �� �迭 ����ϱ�
    for (int i = 0;i < size;i++)
        printf("%d ", list[i]);
    printf("\n");
    // �������� ����
    for (int i = 0;i < size-1;i++)
    {
        least = i; // least�� �ּڰ��� �ε��� -i��°�� �ּڰ��̶� ����
        for (int j = i+1;j < size;j++) // i �ٷ� ������°���� ���ϸ鼭 �ּڰ� ã��
        {
            if (list[least] > list[j]) // �ּҶ�� ������ ��Һ��� j��° ��Ұ� ������
                least = j; // �ּڰ� �ε����� j�� ��ü
        }
        // �ּڰ��� �ڸ� ��ȯ
        temp = list[i]; // i��° ��Ҹ� �� ������ ����
        list[i] = list[least]; // i �ڸ����� �ּڰ� ��� ����
        list[least] = temp; // �ּڰ��� �־��� �ڸ����� i��°�� �־��� ��� ����
    }
    // ���ĵ� �迭 ����ϱ�
    for (int i = 0;i < size;i++)
        printf("%d ", list[i]);
    return 0;
}