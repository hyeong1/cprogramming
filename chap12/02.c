// ���ڿ� �������� 2��
// ���ڿ��� �Է����� �޾Ƽ� ���ڿ��� ���Ե� ��� ���� ���ڸ� �����ϴ� �Լ� �ۼ� �� �׽�Ʈ
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* ���ڿ� �Է� �ȹް� ���ڿ��� �̸� ���� ���ڿ��� �־����� ��
char *DeleteSpace(char *s); // ���� ���ڰ� �ִ� ���ڿ� s�� �޾Ƽ� ������ ���� ���ο� ���ڿ��� ��ȯ�ϴ� �Լ�

int main()
{
    char input[] = "i heelo i";

    printf("%s\n", DeleteSpace(input));

    return 0;
}

char *DeleteSpace(char *s)
{
    char *str = (char *)malloc(sizeof(s)); // ��ȯ�� ���ο� ���ڿ� ����
    int k = 0;
    for (int i = 0; i < strlen(s); i++) // �Ű����� ���ڿ� s�� ���� ���ڸ� Ȯ���ϴ� �ݺ���
        if (s[i] != ' ')                // ������ �ƴϸ�
            str[k++] = s[i];            // �� �ڸ��� ���� �ְ� �ε��� ������Ű��
    str[k] = '\0'; // ������ ���ڿ��� �ΰ� �ֱ�
    return str;
}*/

void DeleteSpace2(char *str); // ���� ���ڰ� �ִ� ���ڿ����� ���� ���� ������ ���� ����ϴ� �Լ�

int main()
{
    char str[50]; // �Է¹��� ���ڿ� �迭�� ũ�⸦ 50���� �����Ҵ�
    printf("���� ���ڰ� �ִ� ���ڿ� �Է�: ");
    gets(str);
    // scanf("%s", str); // scanf�� ������ ���Ե��� �ʾ� ������ �ִ� ���ڿ��� �Է��� �� ����
    DeleteSpace2(str);
    return 0;
}

void DeleteSpace2(char *str)
{
    for (int i = 0; str[i] != '\0'; i++) // str[i]�� null�� �ƴҵ��� �ݺ�
        if (str[i] != ' ')
            printf("%c", str[i]);
}
