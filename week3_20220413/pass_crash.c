#include <stdio.h>

int main()
{
    // 차의 높이는 170cm
    // 3개의 터널
    // 터널의 높이가 차의 높이보다 같거나 낮다면 차는 터널과 충돌
    // 3개의 터널 높이 입력받아서 잘 통과하면 PASS
    // 충돌한다면 CRASH 출력

    int car, t1, t2, t3;
    printf("첫번째 터널 높이:");
    scanf("%d", &t1);

    printf("두번째 터널 높이:");
    scanf("%d", &t2);

    printf("세번째 터널 높이:");
    scanf("%d", &t3);

    car = 170;

    // 첫번째 터널
    // 차의 높이가 터널보다 크거나 같으면 충돌
    if (car >= t1){  // == car < t1
        printf("CRASH\n");
    }
    // 차의 높이가 터널보다 작으면 무사히 통과
    else{
        printf("PASS\n");
    }

    // 두번째 터널
    if (car >= t2){
        printf("CRASH\n");
    }
    else{
        printf("PASS\n");
    }

    // 세번째 터널
    if (car >= t3){
        printf("CRASH\n");
    }
    else{
        printf("PASS\n");
    }



    return 0;
}