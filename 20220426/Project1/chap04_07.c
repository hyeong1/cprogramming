#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	double m, v, e;
	printf("����(kg): ");
	scanf("%lf", &m);
	printf("�ӵ�(m/s): ");
	scanf("%lf", &v);

	e = (m * v * v) / 2.0;
	printf("�������(J): %lf", e);

	return 0;
}