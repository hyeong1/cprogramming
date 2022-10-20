// ����Ž��
#include <stdio.h>

int BinarySearch(int list[], int size, int k);
int main()
{
    int list[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size, k;
    size = sizeof(list) / sizeof(list[0]); // �迭 ũ�� ����
    printf("ã�� ����: ");
    scanf("%d", &k);
    if (k > 10)
        printf("�ش� ���ڴ� �迭�� �����ϴ�.\n");
    else
        printf("�ش� ���ڴ� %d��°�� �ֽ��ϴ�.\n", BinarySearch(list, size, k) + 1);
    
    return 0;
}

int BinarySearch(int list[], int size, int k)
{
    int low, high, middle;
    low = 0;
    high = size-1;
    while (low <= high)
    {
        middle = (low + high) / 2;
        if (k == list[middle]) // �迭 �߰� ��Ҷ� ã������ ���ڶ� ������
            return middle;
        else if (k > list[middle]) // k�� �迭 �߰� ��Һ��� ũ��
            low = middle + 1; // �߰���� ���� �� �迭�� ������ �� �迭�̶��� ���ϱ� ���ؼ� low���� middle+1�� ��ü
        else // k�� �迭 �߰� ��Һ��� ������
            high = middle - 1; // �߰���� ���� �� �迭�ϰ� ���� ���̱� ������ �� �迭 ��ȣ�� middle-1�� ��ü
    }
    return 0;
}