// ���ڿ� �������� 3��
// ���ڿ� �ȿ� ���Ե� Ư���� ������ ������ ���� �Լ� �ۼ� �� �׽�Ʈ
#include <stdio.h>
#include <string.h>

int FindChar(char *s, int c);

int main()
{
    char input[100];
    char word;
    printf("���ڿ��� �Է��Ͻÿ�: ");
    gets(input);
    printf("������ �� ���ڸ� �Է��Ͻÿ�: ");
    scanf("%c", &word);

    printf("%c�� ����: %d\n", word, FindChar(input, word));
    return 0;
}

int FindChar(char *s, int c)
{
    int count = 0; // Ư�� ������ ������ �� ���� ����
    for (int i = 0; i < strlen(s); i++)
        if (s[i] == (char)c) // Ư�� ���ڸ�
            count++;         // count ����
    return count;
}