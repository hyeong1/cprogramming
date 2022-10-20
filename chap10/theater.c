// 극장 예매 시스템
// 10월 27일까지 추가할 것
// 1. 좌석 출력 함수로 바꾸기 o
// 2. 예매하는 과정 함수로 바꾸기 x
// 3. 여러 좌석 한 번에 예약받기 x
// 4. 배열은 2차원으로 바꾸기 x
#include <stdio.h>

void PrintSeat(int seat[], int size);

int main()
{
    char ans1;
    int ans2, seat[10] = {0};
    while (1)
    {
        printf("좌석을 예약하시겠습니까?(y 또는 n) ");
        scanf(" %c", &ans1);
        if (ans1 == 'y')
        {
            PrintSeat(seat, 10);

            printf("몇번째 좌석을 예약하시겠습니까?");
            scanf("%d", &ans2);
            if (ans2 <= 0 || ans2 > 10) // 선택한 좌석번호가 0 이하거나 배열 크기인 10 이상이면
            {
                printf("1부터 10사이의 숫자를 입력하세요\n");
                continue;
            }
            if (seat[ans2 - 1] == 0) // 예약되지 않았으면
            {
                seat[ans2 - 1] = 1; // 1로 바꾸고
                printf("예약되었습니다.\n");
            }
            else // 예약되었으면 (1이면)
                printf("이미 예약된 자리입니다.\n");
        }
        else if (ans1 == 'n')
            return 0; // 대답이 n이면 종료
    }
    return 0;
}

void PrintSeat(int seat[], int size)
{
    printf("------------------------\n");
    printf("1 2 3 4 5 6 7 8 9 10\n");
    printf("------------------------\n");
    for (int i = 0; i < size; i++)
        printf("%d ", seat[i]); // 좌석 예매 유무 출력 -0이면 예약x, 1이면 예약o
    printf("\n");
}