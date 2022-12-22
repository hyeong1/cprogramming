/*
극장 예매 시스템
시작화면
1. 로그인 -> 선택 시 id, password 입력 - 맞으면 예약 진행/틀리면 다시 id, password 입력
2. 회원가입 -> 회원가입 시 회원 정보 파일로 저장
3. 종료 -> 선택 시 프로그램 종료
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct member // 사용자 회원정보 구조체
{
    char id[10];
    char password[50];
} JOIN;

void PrintSeat(int (*seat)[10], int rowSize, int colSize); // 좌석 출력 함수
void ReserveSeat(int (*seat)[10]);                         // 예매하는 과정 함수
int Login(JOIN *userList, int (*seat)[10]);                // 로그인하는 함수
void JoinMember(JOIN *userList);                           // 회원가입하는 함수

int main()
{
    int seat[10][10] = {0}; // 좌석 - 2차원 배열 생성
    int userChoice;         // 시작화면에서 1, 2, 3 선택 결과 저장하는 변수
    JOIN *userInformation;  // 회원 정보를 저장할 구조체 배열

    // 시작화면
    while (1)
    {
        printf("1. 로그인\n2. 회원가입\n3. 종료\n");
        scanf("%d", &userChoice);

        switch (userChoice)
        {
        case 1:                                // 1 선택하면 로그인 함수 실행
            if (!Login(userInformation, seat)) // 로그인 함수가 0 반환하면
                ReserveSeat(seat);             // 예약 함수 실행
            break;
        case 2: // 2 선택하면 회원가입 함수 실행
            JoinMember(userInformation);
            break;
        case 3: // 3 선택하면 강제종료
            exit(0);
        default:
            break;
        }
    }
    return 0;
}

void PrintSeat(int (*seat)[10], int rowSize, int colSize) // 좌석 출력 함수
{
    // 2차원 좌석 출력하기
    // 좌석번호 출력
    for (int i = 1; i <= 100; i++)
    {
        printf("%d\t", i);
        if (i % 10 == 0)  // i가 10의 배수일 때마다
            printf("\n"); // 줄바꿈
    }
    // 좌석 예약 여부 출력
    for (int i = 0; i < rowSize; i++)
    {
        for (int j = 0; j < colSize; j++)
            printf("%d\t", *(*(seat + i) + j));
        printf("\n");
    }
}

void ReserveSeat(int (*seat)[10]) // 예매하는 과정 함수
{
    char ans1;           // 사용자의 예약 여부를 저장하는 변수
    int member, seatNum; // 인원수, 좌석번호 변수
    while (1)
    {
        printf("좌석을 예약하시겠습니까?(y 또는 n) ");
        scanf(" %c", &ans1);
        if (ans1 == 'y')
        {
            // 좌석 상태 먼저 출력
            PrintSeat(seat, 10, 10);

            // 예약할 인원 입력받기
            printf("몇 명 예약하시겠습니까? ");
            scanf("%d", &member);
            // 인원 수 만큼 예약과정 반복하기
            for (int i = 0; i < member; i++)
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
                if (*(*(seat + (seatNum / 10)) + (seatNum % 10)) == 0) // 예약되지 않았으면
                {
                    *(*(seat + (seatNum / 10)) + (seatNum % 10)) = 1; // 1로 바꾸고
                    printf("예약되었습니다.\n");                      // 예약완료 문구 출력
                }
                else // 예약되었으면 (1이면)
                {
                    printf("이미 예약된 자리입니다.\n");
                    i--; // i값 감소시켜서 다시 예약하기
                }
            }
        }
        else if (ans1 == 'n')
            break; // 대답이 n이면 종료
    }
}

int Login(JOIN *userList, int (*seat)[10]) // 로그인하는 함수 - id, password 입력받아서 비교하기
{
    char inputId[10], inputPassword[50];     // 사용자가 입력한 id, password를 저장할 문자열
    FILE *fp = fopen("userNumber.txt", "r"); // 회원 수 파일에서 회원 수를 읽어오기 위해서 읽기모드로 파일 열기
    // 회원 수 파일에서 회원 수 가져온 후 구조체 배열 동적 할당 해주기
    int userN; // 회원 수
    fscanf(fp, "%d", &userN);
    userList = (JOIN *)malloc(sizeof(JOIN) * userN); // 회원 수 만큼 사용자 정보 배열 동적 메모리 할당

    // 아직 가입한 회원이 없다면
    if (userN == 0)
    {
        printf("가입 정보가 없습니다. 회원가입을 먼저 해주세요.\n");
        exit(0);
    }
    fclose(fp); // 사용자 정보 배열에 동적 할당만 해주고 회원 수 파일은 닫기

    // 회원 정보(id, password) 가져오기
    fp = fopen("membership.txt", "r"); // 회원 정보 파일 열어서
    // 동적 할당한 구조체 배열에 파일 정보 넣기 (파일에 있는 id, password를 배열에 넣기)
    for (int i = 0; i < userN; i++)
        fscanf(fp, "%s %s", &((userList + i)->id), &((userList + i)->password));

    // 로그인하려는 사용자의 id, password 입력받기
    printf("id: ");
    scanf("%s", inputId);
    printf("비밀번호: ");
    scanf("%s", inputPassword);

    // id, password 비교 후 맞으면 예약 수행, 틀리면 다시 입력
    while (1)
    {
        for (int i = 0; i < 10; i++)
            if (!strcmp(inputId, (userList + i)->id) && !strcmp(inputPassword, (userList + i)->password)) // main에 있는 유저 정보 구조체 배열에 입력한 id와 password가 있는지 검사
            {
                free(userList); // id, password 제대로 입력했으면 사용자 정보 배열에 동적 할당한 메모리는 반납
                return 0;       // 0 반환하고 로그인 함수 종료
            }
        // for문을 다 돌았으면 회원정보에 없는 id, password를 입력한 것이므로 다시 입력받기
        printf("아이디, 비밀번호를 다시 입력하세요\n");
        memset(inputId, 0, sizeof inputId); // 다시 입력받기 전에 이전에 받은 문자열 비워주기
        memset(inputPassword, 0, sizeof inputPassword);
        printf("id: ");
        scanf("%s", inputId);
        printf("비밀번호: ");
        scanf("%s", inputPassword);
    }
    fclose(fp);
}

void JoinMember(JOIN *userList) // 회원가입하는 함수
{
    char newId[10], newPassword[50]; // 사용자가 회원가입 시 새로 입력하는 id, password를 저장하는 문자열
    // 회원가입 함수 수행 시 회원 수를 증가시켜야 하므로
    FILE *fp = fopen("userNumber.txt", "r"); // 회원 수가 저장되어있는 파일 읽기모드로 열기
    int userN;                               // 회원 수 변수
    fscanf(fp, "%d", &userN);                // 파일에 있는 회원 수 가져오기
    fclose(fp);                              // 회원 수만 가져오고 파일 닫기

    // 회원 수를 증가시키고 파일에 덮어쓰기 위해 쓰기모드로 열기
    fp = fopen("userNumber.txt", "w");
    userN++; // 회원가입 할 것이므로 회원수 증가
    fprintf(fp, "%d\n", userN);
    fclose(fp); // 회원수만 증가시키고 파일 닫기

    // 회원정보 membership.txt 파일에 덧붙여서 저장하기
    fp = fopen("membership.txt", "a");
    // 회원정보 입력
    printf("사용하실 ID를 입력하세요: ");
    scanf("%s", newId);
    printf("사용하실 비밀번호를 입력하세요: ");
    scanf("%s", newPassword);

    // 파일에 정보 입력하기
    fprintf(fp, "%s %s\n", newId, newPassword);

    fclose(fp);
}