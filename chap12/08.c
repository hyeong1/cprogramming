// ���ڿ� �������� 8
// ���� ���ڿ� �ȿ� ���Ե� ���ܾ��� ������ ����Ͽ� ȭ�鿡 ���
#include <stdio.h>
#include <string.h>

int CheckWord(char* s); // ���ڿ��� ���Ե� ���ܾ��� ������ üũ�ϴ� �Լ�

int main()
{
    char s[100];
    gets(s);

    printf("�ܾ��� ���� %d�Դϴ�.\n", CheckWord(s));

    return 0;
}

int CheckWord(char* s)
{
    int check = 0;
    for (int i = 0;i < strlen(s);i++)
        if (s[i] == ' ')
            check++;

    return (check+1);
}