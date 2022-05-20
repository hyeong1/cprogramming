#include <stdio.h>

// 반복문으로 2에서 100 사이의 소수찾는 프로그램
int main() {
    int i, count;
    count = 0;

    for (i = 2;i <= 100;i++) {
        for (int j = 1;j <= i;j++) {
            if(i % j == 0) {
                count += 1;
            }
        }
        if (count == 2) {
            printf("%d ", i);
        }
        count = 0;
    }

    

    return 0;
}