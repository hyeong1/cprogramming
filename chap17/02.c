// ���� �޸� �Ҵ� �������� 2
// ���̰� 100�� n���� ���ڿ��� �����ϴµ� �ʿ��� ���� �޸� �Ҵ�
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size;
    char **str = NULL;
    printf("���ڿ��� ����: ");
    scanf("%d", &size);

    // 2���� �迭 ���� �Ҵ�
    str = (char **)malloc(size * sizeof(char *)); // �� ���� ���� �Ҵ�
    for (int i = 0; i < size; i++)
        str[i] = (char *)malloc(100); // �� �ϳ��� ũ�� 100���� ����

    // ���ڿ� �Է�
    printf("���ڿ� �Է�: ");
    for (int i = 0;i < size;i++)
        scanf("%s", str[i]);
    // ���ڿ� ���
    printf("�Էµ� ���ڿ�\n");
    for (int i = 0;i < size;i++)
        printf("%s\n", str[i]);
        
    return 0;
}