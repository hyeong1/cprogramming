#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	double m, v, e;
	printf("질량(kg): ");
	scanf("%lf", &m);
	printf("속도(m/s): ");
	scanf("%lf", &v);

	e = (m * v * v) / 2.0;
	printf("운동에너지(J): %lf", e);

	return 0;
}