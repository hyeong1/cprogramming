#include <stdio.h>
#include <stdlib.h>

int check(int id, int password)
{
    static int superId = 1234;
    static int superPassword = 1234;
    static int tryCount = 0;
    tryCount++; // �Լ� ����Ǹ� tryCount ����
    if (tryCount >= 3)
    {
        printf("Ƚ�� �ʰ�\n");
        exit(1);
    }
    if (id == superId && password == superPassword)
        return 1;
    else
        return 0;
}

int main()
{
    int id, password;
    while(1)
    {
        scanf("%d\n%d", &id, &password);
        if (check(id, password)) // 1�� ��ȯ������
            break;
    }
    printf("�α��� ����\n"); // while������ break����Ǹ� ��� (3�� �̻� ������ ������ exit(1)����)

    return 0;
}