#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main()
{
	int number1, number2, sum;

	printf("ù��° ���ڸ� �Է��ϼ���: ");
	scanf("%d", &number1);
	printf("�ι�° ���ڸ� �Է��ϼ���: ");
	scanf("%d", &number2);

	sum = number1 + number2;

	printf("�μ��� ��: %d", sum);

	return 0;
}