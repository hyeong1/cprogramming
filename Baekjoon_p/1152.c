// �ܾ��� ����
// ����ܾ�� �������� �̷���� ���ڿ� �Է�
// �Է� ���ڿ����� �� ���� �ܾ �ִ��� ���ϱ�
#include <stdio.h>
#include <string.h>

int main()
{
    char words[1000000] = {'\0'};
    int size, count = 0; // ���ڿ� ���� ����, �ܾ� ���� üũ�� ���� ����
    //scanf("%[^\n]s", words); // ���� ���� ���ڿ� �Է�
    gets(words);

    size = strlen(words);
    //printf("%d\n", size);
    for (int i = 0;i < size-1;i++)
    {
        if (words[i] == ' ')
            count++;
    }
    
    if (words[0] != ' ')
        printf("%d", count+1);
    else
        printf("%d", count);
    return 0;
}