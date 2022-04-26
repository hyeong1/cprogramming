#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int data;
	printf("아스키 코드값을 입력하시오: ");
	scanf("%d", &data);

	printf("문자: %c입니다.", data);

	return 0;
}