// ����, ����, ����, �������� �����ϴ� ���� ���α׷�
// �� ������� �� ���� ���Ǿ����� ���
// �� ������ �����ϴ� �Լ����� �ڽ��� ȣ��� Ƚ���� ȭ�鿡 ���
// 2. ���� ������ ����Ͽ� ���α׷��� �ۼ��϶�
#include <stdio.h>

int countA, countS, countM, countD;
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
   countA++;
   printf("������ �� %d�� ����Ǿ����ϴ�.\n", countA);
   printf("���� ���: %d\n", a+b);
}

void sub(int a, int b)
{
   countS++;
   printf("������ �� %d�� ����Ǿ����ϴ�.\n", countS);
   printf("���� ���: %d\n", a-b);
}

void mul(int a, int b)
{
   countM++;
   printf("������ �� %d�� ����Ǿ����ϴ�.\n", countM);
   printf("���� ���: %d\n", a*b);
}

void div(int a, int b)
{
   countD++;
   printf("�������� �� %d�� ����Ǿ����ϴ�.\n", countD);
   printf("���� ���: %d\n", a/b);
}