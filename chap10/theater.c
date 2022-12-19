/*
극장 예매 시스템 (과제 마감: 12월 24일 24:00까지 이메일로 제출-소스파일만(.c파일만))
시작화면으로 추가할 것
1. 로그인 -> 선택 시 id, password 입력 - 맞으면 예약 진행/틀리면 다시 id, password 입력받게 해라 (함수) 나중에 로그인해서 내 예약정보까지 확인할 수 있게 할거임
  - 로그인 시 파일에서 정보 읽어와서 수행
2. 회원가입 -> 회원정보는 id, password 받아서 구조체 배열로 저장 (함수) -> 회원은 3명
  - 회원가입 시 회원 정보 파일로 저장 (메모리 동적할당해서 회원가입하면 가산점)
3. 종료 -> 선택 시 끝 (함수)
회원가입될 때마다 메모리 할당해서 저장을 해주면? -회원이 늘어날 때마다 메모리 할당해주기
-인덱스 쓰지말고 모두 포인터로 사용

아직 못한 것들
-파일 & 배열 회원 수 제한
-저장된 파일에서 id먼저 가져와서 입력된 값이랑 비교하고
-해당 id의 비밀번호까지 비교해서 로그인 수행하기
-인덱스 모두 포인터로 바꾸기
-시작할 때마다 전 실행에서 입력한 회원 정보들 기억
생각
1. 프로그램이 실행되면 파일에 입력된 모든 정보를 main의 구조체 배열로 가져옴
2. main으로 가져와서 회원 수 제한 - 회원가입하려고 하는데 제한 인원 넘으면 x
3. 회원가입을 선택할 때마다 동적 메모리 할당하면 가산점
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct member // 사용자 회원정보 저장 -회원 3명??
{
    char id[10];
    char password[50];
} JOIN;

void PrintSeat(int seat[][10], int rowSize, int colSize); // 좌석 출력 함수
void ReserveSeat(int seat[][10]);                         // 예매하는 과정 함수
void Login(JOIN *userList, int seat[][10]);               // 로그인하는 함수
void JoinMember(JOIN *userList, FILE *member);            // 회원가입하는 함수

int main()
{
    int seat[10][10] = {0};                        // 좌석 - 2차원 배열 생성
    int userChoice;                                // 시작화면에서 1, 2, 3 선택 결과 저장하는 변수
    JOIN userInformation[10];                      // 회원가입 인원은 3명
    FILE *fMembers = fopen("membership.txt", "a"); // "a"는 파일 뒤에 덧붙이기
    // 프로그램 실행되면 main에서 구조체 배열에 파일 정보들 가져오기

    /*
    // 회원가입 함수 테스트
    JoinMember(userInformation);
    printf("ID: %s\n", userInformation[0].id);
    printf("비밀번호: %s\n", userInformation[0].password);
    // 로그인 함수 테스트
    Login(userInformation, seat);
    // 회원 정보 출력 테스트
    for (int i = 0;i < 10;i++)
    {
        printf("ID: %s\n", userInformation[i].id);
        printf("PASSWORD: %s\n", userInformation[i].password);
    }
    */

    // 시작화면
    while (1)
    {
        printf("1. 로그인\n2. 회원가입\n3. 종료\n");
        scanf("%d", &userChoice);

        switch (userChoice)
        {
        case 1: // 1 선택하면 로그인 함수 실행
            Login(userInformation, seat);
            break;
        case 2: // 2 선택하면 회원가입 함수 실행
            JoinMember(userInformation, fMembers);
            break;
        case 3: // 3 선택하면 강제종료
            exit(0);
        default:
            break;
        }
    }
    fclose(fMembers);
    // ReserveSeat(seat); // 예약하기
    return 0;
}

void PrintSeat(int seat[][10], int rowSize, int colSize) // 좌석 출력 함수
{
    // 2차원 좌석 출력하기
    for (int i = 1; i <= 100; i++) // 좌석번호 출력
    {
        printf("%d\t", i);
        if (i % 10 == 0)  // i가 10의 배수일 때마다
            printf("\n"); // 줄바꿈
    }
    for (int i = 0; i < rowSize; i++) // 좌석 예약 여부 출력
    {
        for (int j = 0; j < colSize; j++)
            printf("%d\t", seat[i][j]);
        printf("\n");
    }
}

void ReserveSeat(int seat[][10]) // 예매하는 과정
{
    char ans1;
    int member, seatNum; // 인원수, 좌석번호 변수
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

void Login(JOIN *userList, int seat[][10]) // 로그인하는 함수 - id, password 입력받아서 비교하기
{
    char inputId[10], inputPassword[50]; // 사용자가 id, password 입력하는 문자열
    // id, password 입력받기
    printf("id: ");
    scanf("%s", inputId);
    printf("비밀번호: ");
    scanf("%s", inputPassword);

    // strcmp 함수 사용해서 id, password 비교하고 싶다
    // strcmp(inputId, userInformation[i].id)
    /*
    for (int i = 0; i < 10; i++)
        if (!strcmp(inputId, userList[i].id)) // main에 있는 유저 정보 구조체 배열에 입력한 id와 password가 있는지 검사
            return 0; // 같으면 0 반환하기
    */
    while (1)
    {
        for (int i = 0; i < 10; i++)
            if (!strcmp(inputId, userList[i].id) && !strcmp(inputPassword, userList[i].password)) // main에 있는 유저 정보 구조체 배열에 입력한 id와 password가 있는지 검사
            {
                ReserveSeat(seat); // 같으면 예약하는 함수 실행하기
                exit(0);           // 강제종료
            }
        // 반복문을 다 돌았으면 회원정보에 없는 id, password를 입력한 것이므로 다시 입력받기
        printf("아이디, 비밀번호를 다시 입력하세요\n");
        memset(inputId, 0, sizeof inputId); // 다시 입력받기 전에 이전에 받은 문자열 비워주기
        memset(inputPassword, 0, sizeof inputPassword);
        printf("id: ");
        scanf("%s", inputId);
        printf("비밀번호: ");
        scanf("%s", inputPassword);
    }
}

void JoinMember(JOIN *userList, FILE *member) // 회원가입하는 함수 - member 구조체 배열을 매개변수로 받음
{
    static int userNum = 0;      // userInformation 구조체 배열의 인덱스로 사용할 변수 -> 실행될 때마다 인덱스가 원하는대로 증가하지 않고 0부터 시작함 -> static 변수로 바꿈
    printf("%d번째\n", userNum); // 인덱스 변수 확인용
    printf("사용할 id를 입력하세요: ");
    scanf("%s", userList[userNum].id);
    // fscanf(fp, "%", &변수); --> 파일에 입력하기

    printf("사용할 password를 입력하세요: ");
    scanf("%s", userList[userNum].password);
    fprintf(member, "%s\t%s\n", userList[userNum].id, userList[userNum].password);

    userNum++; // 회원가입하고 userNum 증가시키고 함수 종료
}