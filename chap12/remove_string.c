// ���ڿ��� �Ϻθ� �����ϴ� �Լ� �ۼ�
#include <stdio.h>
#include <string.h>

void remove_string(char *s, int start, int n);

int main()
{
    char str[100];
    printf("���ڿ��� �Է��Ͻÿ�: ");
    gets(str);
    remove_string(str, 0, 4);
    printf("%s\n", str);
    return 0;
}

void remove_string(char *s, int start, int n)
{
    // ������ ���� ���� �����
    for (int i = start; i < n; i++)
        s[i] = s[n + i];
    // ���� ���ڵ� �ڸ� �ű��
    for (int i = n; i < strlen(s); i++)
        s[i] = s[n + i];
}