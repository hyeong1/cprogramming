// ����ü �������� 11
// ��ȭ��ȣ�� ���� -�̸�, ����ȭ��ȣ, �޴�����ȣ�� �����Ǵ� ����ü ����
// ����ü �迭 �����ؼ� ��ȭ��ȣ�� ����
// 3���� �����͸� ����ڷκ��� �޾Ƽ� ����
// ����ڷκ��� �̸��� �Է¹޾Ƽ� ��ȭ��ȣ�� �˻��ϴ� ���α׷��� �ۼ��϶�
#include <stdio.h>
#include <string.h>

typedef struct NumberBook
{
    char name[10];
    char homeNumber[50];
    char phoneNumber[50];
} NBOOK;

NBOOK InsertInfo(NBOOK *list, int size);               // ����ü �迭�� ���� �Է��ϴ� �Լ�
NBOOK FindNumber(NBOOK *list, char *search, int size); // ����� �̸����� ��ȭ��ȣ �˻��ϴ� �Լ�

int main()
{
    NBOOK list[3];
    char searchUser[10];
    // ����ü �迭�� ���� �Է�
    InsertInfo(list, 3);

    // �˻��� ����� �Է� �ޱ�
    printf("�˻��� �̸��� �Է��Ͻÿ�: ");
    scanf("%s", searchUser);

    // ����� �̸� �˻� �� �ش� ������� ����ȭ��ȣ, �޴�����ȣ ���
    FindNumber(list, searchUser, 3);

    return 0;
}

NBOOK InsertInfo(NBOOK *list, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("�̸�: ");
        scanf("%s", &list[i].name);
        printf("����ȭ��ȣ: ");
        scanf("%s", &list[i].homeNumber);
        printf("�޴�����ȣ: ");
        scanf("%s", &list[i].phoneNumber);
    }
}

NBOOK FindNumber(NBOOK *list, char *search, int size)
{
    int result;
    for (int i = 0; i < size; i++)
        if (!strcmp(list[i].name, search))
            result = i;

    // ����ڸ� ã�� �� ����ȭ��ȣ, �޴�����ȣ ���
    printf("����ȭ��ȣ: %s\n", list[result].homeNumber);
    printf("�޴�����ȣ: %s\n", list[result].phoneNumber);
}