// ���ڿ��� �Է����� �޾Ƽ� ���ڿ��� ���Ե� ��� ���� ���ڸ� �����ϴ� �Լ��� �ۼ��ϰ� �׽�Ʈ�϶�
#include <stdio.h>
#include <string.h>

void DeleteSpace(char *s, int size);

int main()
{
    char str[100];
    printf("���� ���ڰ� �ִ� ���ڿ� �Է�: ");
    gets(str); // scanf�� ������ �������� �����Ƿ� gets���

    DeleteSpace(str, strlen(str));

    return 0;
}

void DeleteSpace(char *s, int size)
{
    for (int i = 0; i < size; i++)
    {
        if (s[i] == ' ') // ���ڰ� �����̸�
            continue;    // �ƹ��͵� �������� �ʴ´�.
        printf("%c", s[i]);
    }
}