#include <stdio.h>

// 입력값 받아서 입력값까지 제곱값 구해서 출력하기
int main() {
    int input_num;
    int i = 1;
    printf("입력값: ");
    scanf("%d", &input_num);

    while (i <= input_num) {
        printf("%d: %d\n", i, i * i);
        i++;
    }

    return 0;
}