// 덧셈, 뺄셈, 곱셈, 나눗셈을 지원하는 계산기 프로그램
// 각 연산들이 몇 번씩 계산되었는지 기억
// 각 연산을 지원하는 함수들은 자신이 호출된 횟수를 화면에 출력
// 1. 정적 지역 변수를 사용하여 프로그램을 작성하라
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
   printf("연산 입력: ");
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
   printf("덧셈은 총 %d번 실행되었습니다.\n", count);
   printf("연산 결과: %d\n", a+b);
}

void sub(int a, int b)
{
   static int count = 0;
   count++;
   printf("뺄셈은 총 %d번 실행되었습니다.\n", count);
   printf("연산 결과: %d\n", a-b);
}

void mul(int a, int b)
{
   static int count = 0;
   count++;
   printf("곱셈은 총 %d번 실행되었습니다.\n", count);
   printf("연산 결과: %d\n", a*b);
}

void div(int a, int b)
{
   static int count = 0;
   count++;
   printf("나눗셈은 총 %d번 실행되었습니다.\n", count);
   printf("연산 결과: %d\n", a/b);
}