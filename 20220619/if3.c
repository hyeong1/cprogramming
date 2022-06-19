#include <stdio.h>

int main() {
    int num1, num2, num3;
    printf("정수를 입력하시오: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    if (num1 < num2) {
        if (num1 < num3)
            printf("제일 작은 정수는 %d입니다.", num1);
        else 
            printf("제일 작은 정수는 %d입니다.", num3);
    }
    else {
        if (num2 < num3) 
            printf("제일 작은 정수는 %d입니다.", num2);
        else 
            printf("제일 작은 정수는 %d입니다.", num3);
    }

    return 0;
}