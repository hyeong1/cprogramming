#include <stdio.h>

int main() {
    int i, j;

    for (i = 0;i < 5;i++) { // ++i: 더하고 시작, i++: 해당 줄 끝나고 더하기
        // i == 0, 1, 2, 3, 4
        // 밖에 for문은 * 5개
        for (j = 0;j < i;j++) {
            // 0부터 i까지 (마지막: 4까지)
            // 밖에가 거짓이 될 때까지 계속 반복-할 때마다 j = 0
            // j == 0일때 i == 0 --> 실행x 밖에 for문만 실행
            // 안에 for문은 *을 i번 찍어라 
            // 횟수
            printf("*");
        }
        printf("*\n");
    }

    return 0;
}