// ���ڿ� �������� 9
// �����ִ� ���ڿ��� �޾Ƽ� ù ���ڴ� �빮�ڷ�, ���������� ��ħǥ�� �ﵵ�� �����ϴ� ���α׷�
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void PrintModify(char *s); // ������ ���ڿ��� ����ϴ� �Լ�

int main()
{
    char s[100];
    gets(s);

    PrintModify(s);
    return 0;
}

void PrintModify(char *s)
{
    // ù ���� ��� �κ�
    if (islower(s[0]))               // islower()�Լ�: �ҹ��ڸ� true
        printf("%c", toupper(s[0])); // ù���ڰ� �ҹ��ڸ� �빮�ڷ� ���
    else
        printf("%c", s[0]);

    // �߰� ���� ��� �κ�
    for (int i = 1; i < strlen(s) - 1; i++)
        printf("%c", s[i]);

    // ������ ���� ��� �κ�
    if (s[strlen(s) - 1] != '.') // ������ ���ڰ� ��ħǥ�� �ƴϸ�
    {
        printf("%c", s[strlen(s) - 1]); // ������ ���� ����ϰ�
        printf(".");                    // ��ħǥ�� ����ϱ�
    }
    else                            // ������ ���ڰ� ��ħǥ�� ������
        printf("%c", s[strlen(s)-1]); // �״�� ����ϱ�
}