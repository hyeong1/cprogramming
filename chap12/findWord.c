// ���ڿ� �ȿ��� �ܾ��� ���� ã��
#include <stdio.h>
#include <string.h>

int main()
{
    char s[] = "Man is immortal, because he has a soul";
    char step[] = " ,\t\n"; // �и��� ����
    char *token;
    int word = 0; // �ܾ��� ������ �� ����

    // ���ڿ��� �����ϰ� ���� ��ū�� ��´�.
    token = strtok(s, step); // step�� �ش��ϴ� ���ڰ� ������ ��ū �и�
    while (token != NULL)
    {
        word++; // �ܾ� ���� ����
        printf("��ū: %s\n", token);
        token = strtok(NULL, step); // ���� ��ū�� ��´�.
    }

    printf("�ܾ��� ����: %d\n", word);
    return 0;
}