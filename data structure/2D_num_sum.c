// 2차원 숫자 배열의 행, 열의 합 구하는 문제
// int num[3][4] -> 각 바을 1~20 사이의 난수로 초기화
// 각 방의 내용, 행의 합계, 열의 합계 모두 출력
// 배열 초기화 함수, 결과 출력함수 포함
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void inputArray(int (*p)[4], int row);
void outputArray(int (*p)[4], int row);

int main() {
    int num[3][4];
    int row = sizeof(num) / sizeof(num[0]);

    srand(time(NULL));
    inputArray(num, row);

    outputArray(num, row);

    return 0;
}

void inputArray(int (*p)[4], int row) {
    for (int i = 0;i < row;i++) {
        for (int j = 0;j < 4;j++) {
            p[i][j] = rand() % 20 + 1;
        }
    }
}

void outputArray(int (*p)[4], int row) {
    for (int i = 0;i < row;i++) {
        int rowSum = 0; // 각 행의 합을 저장하는 변수 선언

        printf("    %d행: ", i);
        for (int j = 0;j < 4;j++) {
            printf("%d ", p[i][j]);
            rowSum += p[i][j];
        }
        printf("  %d행의 합: %d", i, rowSum);
        printf("\n");
    }
    printf("열의 합: ");
    for (int j = 0;j < 4;j++) {
        int colSum = 0; // 각 열의 합 저장할 변수 언언
        for (int i = 0;i < row;i++) {
            colSum += p[i][j];
        }
        printf("%d ", colSum);
    }
}
