// 숫자를 입력받아 10 이상의 숫자는 그 숫자를 출력하고 10 미만의 수는 프로그램을 종료하는 문구 출력
#include <stdio.h>

int main() {
    int num;
    printf("숫자를 입력하세요: ");
    scanf("%d", &num);

    if (num > 10) {
        printf("%d\n", num);
    }
    else 
        printf("프로그램을 종료합니다.\n");

    return 0;
}