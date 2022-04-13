#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    //상자의 부피를 구하는 프로그램
    //부피 = 길이 * 너비 * 높이
    //길이, 너비, 높이는 모두 실수로 입력

    double length, width, height, v;

    printf("상자의 가로 세로 높이를 한번에 입력: ");
    scanf("%lf %lf %lf", &length, &width, &height);

    v = length * width * height;

    printf("상자의 부피는 %lf입니다.", v);

    return 0;
}