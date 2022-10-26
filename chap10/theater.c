// 극장 예매 시스템
// 10월 27일까지 추가할 것
// 1. 좌석 출력 함수로 바꾸기 o
// 2. 예매하는 과정 함수로 바꾸기 o
// 3. 여러명 좌석 한 번에 예약받기 o
// 4. 배열은 2차원으로 바꾸기 o
#include <stdio.h>

void PrintSeat(int seat[][10], int rowSize, int colSize); // 좌석 출력 함수
void ReserveSeat(int seat[][10]);                         // 예매하는 과정 함수

int main()
{
    int seat[10][10] = {0};
    // PrintSeat(seat, 10, 10);
    ReserveSeat(seat);
    return 0;
}

void PrintSeat(int seat[][10], int rowSize, int colSize) // 좌석 출력 함수
{
    // 2차원 좌석 출력하기
    for (int i = 1; i <= 100; i++)
    {
        printf("%d\t", i);
        if (i % 10 == 0)  // i가 10의 배수일 때마다
            printf("\n"); // 줄바꿈
    }
    for (int i = 0; i < rowSize; i++)
    {
        for (int j = 0; j < colSize; j++)
            printf("%d\t", seat[i][j]);
        printf("\n");
    }
}

void ReserveSeat(int seat[][10]) // 예매하는 과정
{
    char ans1;
    int member, seatNum;
    while (1)
    {
        printf("좌석을 예약하시겠습니까?(y 또는 n) ");
        scanf(" %c", &ans1);
        if (ans1 == 'y')
        {
            PrintSeat(seat, 10, 10);

            // 몇 명 예약하시겠습니까 추가
            printf("몇 명 예약하시겠습니까? ");
            scanf("%d", &member);            // 예약할 인원 입력받기
            for (int i = 0; i < member; i++) // 인원 수 만큼 예약과정 반복하기
            {
                seatNum = 0; // 좌석 선택 전에 좌석번호 0으로 초기화
                printf("몇번째 좌석을 예약하시겠습니까? ");
                scanf("%d", &seatNum);
                seatNum--;                         // 인덱스로 사용하기 위해 1 감소
                if (seatNum < 0 || seatNum >= 100) // 선택한 좌석번호가 0 이하거나 배열 크기인 10 이상이면
                {
                    printf("1부터 100사이의 숫자를 입력하세요\n");
                    i--; // i 감소시켜서 다시 예약하도록 만들기
                    continue;
                }
                if (seat[seatNum / 10][seatNum % 10] == 0) // 예약되지 않았으면
                {
                    seat[seatNum / 10][seatNum % 10] = 1; // 1로 바꾸고
                    printf("예약되었습니다.\n");
                }
                else // 예약되었으면 (1이면)
                    printf("이미 예약된 자리입니다.\n");
            }
        }
        else if (ans1 == 'n')
            break; // 대답이 n이면 종료
    }
}