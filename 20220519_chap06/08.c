#include <stdio.h>

// 놀이공원의 자유이용권의 가격 계산-현재 시간과 나이 입력받아서 요금 출력
int main() {
    int time, age;
    printf("현재 시간과 나이를 입력하세요: ");
    scanf("%d %d", &time, &age);

    if (time < 17) {
        if ((age >= 3 && age <= 12) || age >= 65) {
            printf("25,000\n");
        }
        else {
            printf("34,000\n");
        }
    }
    else {
        printf("10,000\n");
    }

    return 0;
}