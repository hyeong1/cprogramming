// ����ü �������� 3
// �̸����� ǥ���� �� �ִ� ����ü�� ����
// ������ �ʱⰪ�� �ο��� ��, ���
#include <stdio.h>

typedef struct email
{
    char title[500];    // ����
    char sender[500];   // ������
    char receiver[500]; // �߽���
    char content[500]; // ����
    char data[100];     // ��¥
    int pri;           // �켱����
}EMAIL;

int main()
{
    EMAIL ex1 = {"�Ⱥ� ����", "hyeong@pcu.ac.kr", "2033041@pcu.ac.kr", "hello", "2022/12/02", 1};
    // ���
    printf("����: %s\n", ex1.title);
    printf("������: %s\n", ex1.sender);
    printf("�߽���: %s\n", ex1.receiver);
    printf("����: %s\n", ex1.content);
    printf("��¥: %s\n", ex1.data);
    printf("�켱����: %d\n", ex1.pri);

    return 0;
}