// �ؽ�Ʈ ���Ͽ� ��� �ִ� ���ڵ��� ��� �빮�ڷ� �����Ͽ� ���ο� ���Ͽ� ����
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    char fname1[100], fname2[100], str[100];

    printf("ù��° ���� �̸�: ");
    scanf("%s", fname1); // ���ڿ��� ������ ���� �̸�
    printf("�ι�° ���� �̸�: ");
    scanf("%s", fname2); // �빮�ڷ� �����Ͽ� ������ ���ο� ���� �̸�

    if ((fp = fopen(fname1, "r")) == NULL)
    {
        fprintf(stderr, "���� ���� %s��/�� �� �� �����ϴ�.\n", fname1);
        exit(1);
    }
    // ���ڿ��� �����ͼ� ��� �빮�ڷ� ����
    fgets(str, 100, fp);
    for (int i = 0;i < strlen(str);i++)
        str[i] = toupper(str[i]);
    fclose(fp);

    // ���ο� ���Ͽ� ����
    if ((fp = fopen(fname2, "w")) == NULL)
    {
        fprintf(stderr, "���� ���� %s��/�� �� �� �����ϴ�.\n", fname2);
        exit(1);
    }
    fprintf(fp, "%s", str);
    fclose(fp);

    return 0;
}