#include <stdio.h>

// 입력값 받아서 입력값까지 제곱값 구해서 출력하기
int main() {
    int input_num, i;

    printf("입력값: ");
    scanf("%d", &input_num);
    
    for (i = 1;i <= input_num;i++) {
        printf("%d: %d\n", i, i * i);
    }

    return 0;
}