// ���ڿ� �������� 11
// ����Ű�� ������ ������ ����ڷκ��� ���ڿ��� �Է¹޾Ƽ� ���ڿ��� ���Ե� �ܾ���� �������� ���
#include <stdio.h>
#include <string.h>

int main()
{
    char s[100];
    char *word[100]; // ������ �ܾ� ������ �迭
    int count = 0;
    scanf("%[^\n]s", s);

    // ��� ��
    // hello world --> world hello
    word[count] = strtok(s, " "); // 2���� �迭�� �ڸ� �ܾ� ����
    while (word[count] != NULL)
    {
        count++;
        word[count] = strtok(NULL, " "); // �ڸ� ���� �������� �ٽ� �ڸ��� ���� NULL
    }

    for (int i = count - 1; i >= 0; i--) // word�迭 �޺κк��� ����ϸ� ����
        printf("%s ", word[i]);

    return 0;
}