// 2차원배열-각 문자열의 첫 문자와 마지막 문자 출력하기
#include <stdio.h>
#include <string.h>

void inputArray(char (*p)[80], int row);
void printArray(char (*p)[80], int row);

int main() {
    char str[5][80];
    int row; // 행 개수를 저장하는 변수
    row = sizeof(str)/sizeof(str[0]);

    inputArray(str, row);
    printArray(str, row);

    return 0;
}

// 문자열 입력 함수
void inputArray(char (*p)[80], int row) {
    for (int i = 0;i < row;i++) {
            printf("문자 입력: ");
            scanf("%s", &p[i]);
    }
}

// 문자열의 첫 문자와 마지막 문자 출력 함수
void printArray(char (*p)[80], int row) {
    for (int i = 0;i < row;i++) {
        int n = strlen(p[i]);
        printf("str[%d] = %s ", i, p[i]);      // 문자열은 %s
        printf("%c %c\n", p[i][0], p[i][n-1]); // 문자는 %c
    }
}