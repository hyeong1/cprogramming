#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

// 컴퓨터와 가위바위보 게임
int main() {
    srand(time(NULL));

    int userNum, comNum;
    comNum = rand() % 3 + 1;
    printf("컴퓨터 선택: %d\n", comNum);
    
    printf("선택하시오.(1:가위 2:바위 3:보)");
    scanf("%d", &userNum);

    if (userNum == comNum) {
        printf("비김\n");
    }
    else {
        // userNum != comNum
        if (userNum == 1) {
            // userNum == 1가위
            if (comNum == 2) {
                // comNum == 2바위
                printf("사용자가 졌음\n");
            }
            else {
                // comNum == 3보
                printf("사용자가 이겼음\n");
            }
        }
        else if (userNum == 2) {
            // userNum == 2바위
            if (comNum == 1) {
                // comNum == 1가위
                printf("사용자가 이겼음\n");
            }
            else {
                // comNum == 3보
                printf("사용자가 졌음\n");
            }
        }
        else {
            // userNum == 3보
            if (comNum == 1) {
                // comNum == 1가위
                printf("사용자가 졌음\n");
            }
            else {
                // comNum == 2바위
                printf("사용자가 이겼음\n");
            }
        } 
    }

    return 0;
}