#include <stdio.h>

int main() 
{
    int startH, startM, ovenTime, endH, endM;
    printf("");
    scanf("%d %d\n%d", &startH, &startM, &ovenTime);
    
    // startM + ovenTime == endM

    // startM + ovenTime < 60 60분이 안넘어갈 때
    if (startM + ovenTime < 60) {
        endH = startH;
        endM = startM + ovenTime;
        printf("%d %d", endH, endM);
    }
    // startM + ovenTime >= 60 60분 넘어갈 때 
    else {
        // startM + ovenTime == 딱 60분
        if (startM + ovenTime == 60) {
            endH = startH + 1;
            printf("%d %d", endH, endM - 60);  // 분에서 60빼고 출력
        }
        // startM + ovenTime > 60보다 큼
        else if (startM + ovenTime > 60) {
            endH = startH + 1;    // +1시간
            endM = startM + ovenTime;  
            // endM이 120분 전
            if (endM < 120) {
                endH = endH + 1;  // +1시간
                printf("%d %d", endH, endM - 60);   // 120분전 이므로 분에서 60빼고 출력
            }
            // endM이 120분이거나 더 크고 180분 이전일 때
            else if (endM < 180) {
                endH = endH + 1;
                printf("%d %d", endH, endM - 120);   // 120분이 넘고 180분 전이므로 분에서 60빼고 출력
            }
            // endM이 180분보다 클 때
            else {
                endH = endH + 2;
                printf("%d %d", endH, endM - 180);   // 180분이 넘으므로 분에서 60빼고 출력
            }
        }
    }

    return 0;
}