#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// 컴퓨터가 임의로 정한 1에서 20사이의 수를 찾는 프로그램
int main() {
    int com, guess, tries;
    srand(time(NULL));
    com = rand() % 20 + 1;

    tries = 0;

    do {
        printf("1에서 20사이의 수를 맞추어 보세요 ");
        scanf("%d", &guess);
        tries++;

        if (guess > com)
            printf("제시한 정수가 높습니다.\n");
        if (guess < com) 
            printf("제시한 정수가 낮습니다.\n");

    } while (guess != com);

    printf("정답입니다. 시도횟수: %d\n", tries);

    return 0;
}