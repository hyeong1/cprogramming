#include <stdio.h>

int main()
{
    // 주사위 3개 눈 수 저장할 변수, 상금 변수 선언
    int dice1, dice2, dice3, money;
    printf("결과: ");
    scanf("%d %d %d", &dice1, &dice2, &dice3);

    // 1. 모두 같은 눈
    // 2. 같은 눈 2개
    // 2-1. 첫 번째 == 두 번째
    // 2-2. 첫 번째 == 세 번째
    // 2-3. 두 번째 == 세 번째
    // 3. 모두 다른 눈
    // 3-1 첫 번째가 제일 큰 수
    // 3-2 두 번째가 제일 큰 수
    // 3-3 세 번째가 제일 큰 수

    //1
    if (dice1 == dice2 && dice1 == dice3) {
        money = 10000 + dice1 * 1000;
        printf("%d\n", money);
    }
    //2 -모두 같지는 않음
    //2-1
    else if (dice1 == dice2 && dice1 != dice3) {
        money = 1000 + dice1 * 100;
        printf("%d\n", money);
    }
    //2-2
    else if (dice1 == dice3 && dice1 != dice2) {
        money = 1000 + dice1 * 100;
        printf("%d\n", money);
    }
    //2-3
    else if (dice2 == dice3 && dice2 != dice1) {
        money = 1000 + dice2 * 100;
        printf("%d\n", money);
    }
    //3 -다 다름
    else {
        //3-1 dice1이 클 때
        if (dice1 > dice2 && dice1 > dice3) {
            money = dice1 * 100;
            printf("%d\n", money);
        }
        //3-2 dice2가 클 때
        else if (dice2 > dice1 && dice2 > dice3) {
            money = dice2 * 100;
            printf("%d\n", money);
        }
        //3-3 dice3이 클 때
        else {
            money = dice3 * 100;
            printf("%d\n", money);
        }
    }

    return 0;
}