// ���ڿ� �������� 7
// ����ڿ��� ������ �����ϰ� �亯�� �޾Ƽ� �����̸� 1 ��ȯ, �����̸� 0 ��ȯ�ϴ� �Լ� �ۼ� �� �׽�Ʈ
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int GetResponse(char *prompt);

int main()
{
    char response[5];
    printf("������ �Ͻðڽ��ϱ�? ");
    scanf("%s", response);
    // ��ҹ��ڸ� �������� �ʱ� ���� ��� �ҹ��ڷ� �����
    for (int i = 0;i < strlen(response);i++)
        response[i] = tolower(response[i]);

    if (GetResponse(response)) // �����̸� (1�� ��ȯ������)
        printf("�������� �亯\n");
    else
        printf("�������� �亯\n");

    return 0;
}

int GetResponse(char *prompt)
{
    char pos1[] = "yes", pos2[] = "ok", neg[] = "no"; // ������ �ǹ��ϴ� ���ڿ� pos1, pos2, ������ �ǹ��ϴ� ���ڿ� neg ����
    if (!strcmp(prompt, pos1) || !strcmp(prompt, pos2))
        return 1; // �亯�� �����̸� 1 ��ȯ
    else if (!strcmp(prompt, neg))
        return 0; // �亯�� �����̸� 0 ��ȯ
}