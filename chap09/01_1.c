// ����, ����, ����, �������� �����ϴ� ���� ���α׷�
// �� ������� �� ���� ���Ǿ����� ���
// �� ������ �����ϴ� �Լ����� �ڽ��� ȣ��� Ƚ���� ȭ�鿡 ���
// 1. ���� ���� ������ ����Ͽ� ���α׷��� �ۼ��϶�
#include <stdio.h>

void add(int a, int b);
void sub(int a, int b);
void mul(int a, int b);
void div(int a, int b);

int main()
{
   int num1, num2;
   char op;
   do
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
   } while(1);

   return 0;
}

void add(int a, int b)
{
   static int count = 0;
   count++;
   printf("������ �� %d�� ����Ǿ����ϴ�.\n", count);
   printf("���� ���: %d\n", a+b);
}

void sub(int a, int b)
{
   static int count = 0;
   count++;
   printf("������ �� %d�� ����Ǿ����ϴ�.\n", count);
   printf("���� ���: %d\n", a-b);
}

void mul(int a, int b)
{
   static int count = 0;
   count++;
   printf("������ �� %d�� ����Ǿ����ϴ�.\n", count);
   printf("���� ���: %d\n", a*b);
}

void div(int a, int b)
{
   static int count = 0;
   count++;
   printf("�������� �� %d�� ����Ǿ����ϴ�.\n", count);
   printf("���� ���: %d\n", a/b);
}