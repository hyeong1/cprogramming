#include <stdio.h>

// 구구단 출력하기
int main() {
    for (int num = 2;num < 10;num++) {    
        for (int i = 1;i < 10;i++) {
            printf("%d * %d = %d\t", num, i, num * i);
        }
        printf("\n");
    }

    return 0;
}