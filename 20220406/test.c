#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main()
{
	int number1, number2, sum;

	printf("첫번째 숫자를 입력하세요: ");
	scanf("%d", &number1);
	printf("두번째 숫자를 입력하세요: ");
	scanf("%d", &number2);

	sum = number1 + number2;

	printf("두수의 합: %d", sum);

	return 0;
}