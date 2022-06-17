#include <stdio.h>

// 막대의 높이 입력받아서 높이만큼 *출력하기
int main() {
    int len;

    while (1) {
        printf("\n막대의 높이 (종료: -1): ");
        scanf("%d", &len);

        for (int i = 1;i <= len;i++)
           printf("*");
        if (len == -1)
            break;  
    } 
    return 0;
}