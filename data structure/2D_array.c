// 2차원 배열 입출력
#include <stdio.h>
void inputArray(int (*p)[4], int row);
void outputArray(int (*p)[4], int row);

int main() {
    int num[3][4];
    int row;
    row = sizeof(num)/sizeof(num[0]); // 전체 크기 나누기 0행 크기 == 행 개수
    inputArray(num, row);
    outputArray(num, row);

    return 0;
}

void inputArray(int (*p)[4], int row) {
    int i, j;
    for (i = 0;i < row;i++) {
        for (j = 0;j < 4;j++) {
            printf("%d행 %d열 방의 값 입력: ", i, j);
            scanf("%d", &p[i][j]);
        }
    }
    return ;
}

void outputArray(int (*p)[4], int row) {
    for (int i = 0;i < row;i++) {
        printf("%d행: ", i);
        for (int j = 0;j < 4;j++) 
            printf("%d ", p[i][j]);
        printf("\n");
    }
    return ;
}