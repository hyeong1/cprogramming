// 각 연산이 수행된 횟수 기억해서 연산결과와 함께 출력하기
#include <stdio.h>

void add(int a, int b); // 덧셈
void sub(int a, int b); // 뺄셈
void mul(int a, int b); // 곱셈
void div(int a, int b); // 나눗셈

int main()
{
    int num1, num2;
    char op; // 연산자 기호 저장 변수
    while (1)
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
    }
    return 0;
}

void add(int a, int b)
{
    static int tryA = 0;
    tryA++;
    printf("덧셈은 총 %d번 실행되었습니다.\n", tryA);
    printf("연산 결과: %d\n", a+b);
}

void sub(int a, int b)
{
    static int tryS = 0;
    tryS++;
    printf("뺄셈은 총 %d번 실행되었습니다.\n", tryS);
    printf("연산 결과: %d\n", a-b);
}

void mul(int a, int b)
{
    static int tryM = 0;
    tryM++;
    printf("곱셈은 총 %d번 실행되었습니다.\n", tryM);
    printf("연산 결과: %d\n", a*b);
}

void div(int a, int b)
{
    static int tryD = 0;
    tryD++;
    printf("나눗셈은 총 %d번 실행되었습니다.\n", tryD);
    printf("연산 결과: %d\n", a/b);
}