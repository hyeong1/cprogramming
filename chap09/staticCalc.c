// �� ������ ����� Ƚ�� ����ؼ� �������� �Բ� ����ϱ�
#include <stdio.h>

void add(int a, int b); // ����
void sub(int a, int b); // ����
void mul(int a, int b); // ����
void div(int a, int b); // ������

int main()
{
    int num1, num2;
    char op; // ������ ��ȣ ���� ����
    while (1)
    {
        printf("���� �Է�: ");
        scanf("%d %c %d", &num1, &op, &num2);
        switch (op)
        {
        case '+':
            add(num1, num2);
            break;
        case '-':
            sub(num1, num2);
            break;
        case '*':
            mul(num1, num2);
            break;
        case '/':
            div(num1, num2);
            break;
        
        default:
            break;
        }
    }
    return 0;
}

void add(int a, int b)
{
    static int tryA = 0;
    tryA++;
    printf("������ �� %d�� ����Ǿ����ϴ�.\n", tryA);
    printf("���� ���: %d\n", a+b);
}

void sub(int a, int b)
{
    static int tryS = 0;
    tryS++;
    printf("������ �� %d�� ����Ǿ����ϴ�.\n", tryS);
    printf("���� ���: %d\n", a-b);
}

void mul(int a, int b)
{
    static int tryM = 0;
    tryM++;
    printf("������ �� %d�� ����Ǿ����ϴ�.\n", tryM);
    printf("���� ���: %d\n", a*b);
}

void div(int a, int b)
{
    static int tryD = 0;
    tryD++;
    printf("�������� �� %d�� ����Ǿ����ϴ�.\n", tryD);
    printf("���� ���: %d\n", a/b);
}