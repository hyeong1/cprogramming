//사용자가 입력한 정수의 모든 약수를 화면에 출력
#include <stdio.h>

int inputNum(); // 정수 입력받는 함수
void findDivisor(int num); // 약수 출력하는 함수

int main() {
    int num = inputNum();

    printf("약수: ");
    findDivisor(num);
    printf("\n");

    return 0;
}

int inputNum() {
    int num;
    printf("정수를 입력하시오: ");
    scanf("%d", &num);

    return num;
}

void findDivisor(int num) {
    for (int i = 1;i <= num;i++) {
        if (num % i == 0)
            printf("%d ", i);
    }
}