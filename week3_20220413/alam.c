#include <stdio.h>

int main()
{
    int H, M;
    printf("시간을 입력하세요(24시간): ");
    scanf("%d %d", &H, &M);

    // 시간이 0으로 주어질 때
    if (H == 0 && (M - 45) == 0){
        M = M - 45;
        printf("%d %d", H, M);
    }
    else if (H == 0){
        H = 24;
        if (M - 45 < 0){
        H = H - 1;
        M = (M + 60) - 45;
        printf("%d %d", H, M);
        }
        else{
            M = M - 45;
            printf("%d %d", H, M);
        }
    }
    // 시간이 0이 아닌 나머지일 때
    else if (M - 45 < 0){
        H = H - 1;
        M = (M + 60) - 45;
        printf("%d %d", H, M);
    }
    else{
        M = M - 45;
        printf("%d %d", H, M);
    }

    return 0;
}