#include <stdio.h>
#include <stdlib.h> // 난수 발생 헤더파일
#include <time.h>   // 시드 -> 난수가 계속 바뀌도록

// 1부터 100까지의 수 -맞추기 게임
// rand() % 100 --> 0부터 99까지
// 맞추기 기회 5번
void findNumber() {
    srand(time(NULL)); // time을 계속 바꿔줘야 실행할 때마다 다른 난수를 발생시킴

    int answer;
    answer = rand() % 100 + 1;

    for (int i = 4;i >= 0;i--) {
        int inputNum;
        printf("1부터 100까지의 수 중 하나를 입력하세요: ");
        scanf("%d", &inputNum);

        if (inputNum < answer) {
            printf("입력한 수보다 더 큽니다.(남은 기회: %d)\n", i);
        }
        else if (inputNum > answer) {
            printf("입력한 수보다 더 작습니다. (남은 기회: %d)\n", i);
        }
        else if (inputNum == answer) {
            printf("%d 정답!\n", answer);
            break;
        }
    }
}

int main() {
    findNumber();

    return 0;
}