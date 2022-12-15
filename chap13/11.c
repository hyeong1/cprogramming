// 구조체 연습문제 11
// 전화번호부 구성 -이름, 집전화번호, 휴대폰번호로 구성되는 구조체 정의
// 구조체 배열 선언해서 전화번호부 구성
// 3명의 데이터를 사용자로부터 받아서 저장
// 사용자로부터 이름을 입력받아서 전화번호를 검색하는 프로그램을 작성하라
#include <stdio.h>
#include <string.h>

typedef struct NumberBook
{
    char name[10];
    char homeNumber[50];
    char phoneNumber[50];
} NBOOK;

NBOOK InsertInfo(NBOOK *list, int size);               // 구조체 배열에 정보 입력하는 함수
NBOOK FindNumber(NBOOK *list, char *search, int size); // 사용자 이름으로 전화번호 검색하는 함수

int main()
{
    NBOOK list[3];
    char searchUser[10];
    // 구조체 배열에 정보 입력
    InsertInfo(list, 3);

    // 검색할 사용자 입력 받기
    printf("검색할 이름을 입력하시오: ");
    scanf("%s", searchUser);

    // 사용자 이름 검색 후 해당 사용자의 집전화번호, 휴대폰번호 출력
    FindNumber(list, searchUser, 3);

    return 0;
}

NBOOK InsertInfo(NBOOK *list, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("이름: ");
        scanf("%s", &list[i].name);
        printf("집전화번호: ");
        scanf("%s", &list[i].homeNumber);
        printf("휴대폰번호: ");
        scanf("%s", &list[i].phoneNumber);
    }
}

NBOOK FindNumber(NBOOK *list, char *search, int size)
{
    int result;
    for (int i = 0; i < size; i++)
        if (!strcmp(list[i].name, search))
            result = i;

    // 사용자를 찾은 후 집전화번호, 휴대폰번호 출력
    printf("집전화번호: %s\n", list[result].homeNumber);
    printf("휴대폰번호: %s\n", list[result].phoneNumber);
}