// ���ڿ� �ȿ� ���Ե� Ư���� ������ ������ ���� �Լ��� �ۼ�
#include <stdio.h>
#include <string.h>

int StrChar(char *s, int c); // s�� ���ڿ�, c�� ������ �� ����

int main()
{
    char s[100];
    int c = 0;
    printf("���ڿ��� �Է��ϼ���: ");
    gets(s);

    StrChar(s, c);
    return 0;
}

int StrChar(char *s, int c)
{
    char find;
    printf("������ �� ���ڸ� �Է��Ͻÿ�: ");
    scanf("%c", &find);

    // ������ �Է��� ���� ã��
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] == find) // �ش� ���ڸ�
            c++;          // c�� ����
    }
    printf("%c�� ����: %d\n", find, c);
}