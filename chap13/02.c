// ����ü �������� 2
// ������¸� ��Ÿ���� ����ü account�� �����ϰ� ����ϱ�
#include <stdio.h>

typedef struct account
{
    int number;
    char name[20];
    int balance;
} ACCOUNT;

    
int main()
{
    ACCOUNT hong = {1, "ȫ�浿", 100000};
    printf("{ %d, %s, %d }\n", hong.number, hong.name, hong.balance);
    return 0;
}