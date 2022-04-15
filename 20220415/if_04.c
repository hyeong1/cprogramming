#include <stdio.h>

int main() {
    // 연도 -윤년이면 1, 아니면 0 출력하기
    // 윤년: 4의 배수 && (100의 배수가 아닐 때 || 400의 배수 일 때)
    int year;
    printf("");
    scanf("%d", &year);

    // 4의 배수
    if (year % 4 == 0) {
        // 100의 배수가 아닐 때 또는 400의 배수 일 때
        if (year % 100 != 0 || year % 400 == 0) {
            printf("1");
        }
        else {
            printf("0");
        }
    }
    //4의 배수 아님
    else {
        printf("0");
    }

    return 0;
}