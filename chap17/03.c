// ����ڷκ��� ���� �ּҷ��� �����ϰ� ����ϴ� ���α׷�
// ����ڷκ��� ���� �ּ��� ������ �Է� ����
// �ּ��� ���� �����߿��� �̸��� �޴��� ��ȣ�� ����
#include <stdio.h>
#include <stdlib.h>

typedef struct adderss
{
    char name[20];
    char phone[100];
} ADDERSS;

int main()
{
    int size; // �ּ��� ����
    ADDERSS *list;
    
    // �ּ��� ���� �Է� �ޱ�
    printf("�ּ��� ����: ");
    scanf("%d", &size);

    // �ּ��� ������ŭ ����ü �迭 ���� �Ҵ�
    list = (ADDERSS*)malloc(size * sizeof(ADDERSS));

    // �ּ� ���� �Է�
    for (int i = 0;i < size;i++)
    {
        printf("�̸��� �Է��Ͻÿ�: ");
        scanf("%s", list[i].name);
        printf("�޴��� ��ȣ�� �Է��Ͻÿ�: ");
        scanf("%s", list[i].phone);
    }

    // ���� ���
    printf("========================================\n");
    printf("�̸�\t\t�޴��� ��ȣ\n");
    printf("========================================\n");
    for (int i = 0;i < size;i++)
        printf("%s\t\t%s\n", list[i].name, list[i].phone);
    printf("========================================\n");

    return 0;
}