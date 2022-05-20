#include <stdio.h>

// 숫자 입력받아서 숫자만큼 별표 출력
int main() {
    int num;
    printf("막대의 높이(종료:-1): ");
    scanf("%d", &num);

    for (int i = 0; i < num; i++) {   
        if (num == -1) {
            break;
        }
        printf("*");
    }

    return 0;
}