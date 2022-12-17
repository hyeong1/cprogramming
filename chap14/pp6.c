// ���������� �������� 6
// ���ڿ��� ����Ű�� �ִ� �������� �迭�� �μ��� �޾Ƽ�
// ���ڿ��� ���ĺ� ������ ���Ľ�Ű�� �Լ� �ۼ�
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void sort_string(char *list[], int size);
int convert_string(const void *a, const void *b);

int main()
{
    char str[3][50]; // �ִ�ũ�� 49�� ���� �� 3�� �Է¹��� �� �ִ� �迭
    int size = sizeof(str) / sizeof(str[0]);
    // ���ڿ� �Է�
    for (int i = 0; i < size; i++)
        scanf("%s", str[i]);

    // ���ĺ� ������ ����
    // sort_string(str, size);
    qsort(str, size, sizeof(str[0]), convert_string);
    // ���� ��� ���
    for (int i = 0; i < size; i++)
        printf("%s\n", str[i]);

    return 0;
}

void sort_string(char *list[], int size)
{
    // �� ���� ù ���ڸ� ���ؼ� �� ���ĸ� ����
    int least;
    char *temp;
    for (int i = 0; i < size; i++)
    {
        // �ּڰ� ã��
        least = i;
        for (int j = i + 1; j < size; j++)
            if (strcmp(list[j], list[least]) < 0)
                least = j;
        // �ڸ� �ٲٱ�
        temp = list[i];
        list[i] = list[least];
        list[least] = temp;
    }
}

int convert_string(const void *a, const void *b)
{
    return strcmp((char *)a, (char *)b);
}