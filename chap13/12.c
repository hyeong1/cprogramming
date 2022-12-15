// 구조체 연습문제 12
// 포커 게임에 사용되는 카드를 구조체 card로 정의
// 52개의 카드를 구조체의 배열로 나타내라.
// 52개의 카드를 적절한 값으로 초기화하고 값들을 출력하는 프로그램을 작성하라
// card구조체 구성: 카드의 수 value-정수, 카드의 타입 suit-하나의 문자
#include <stdio.h>

typedef struct card
{
    int value; // 카드의 수
    char suit; // 카드 타입
} CARD;

int main()
{
    CARD list[52];
    // 구조체 배열 list 초기화하기
    int val = 1; // 초기화할 value 값 변수
    for (int i = 0; i < 13; i++)
    {
        list[i].value = val++;
        list[i].suit = 'c';
    }
    val = 1;
    for (int i = 13; i < 26; i++)
    {
        list[i].value = val++;
        list[i].suit = 'd';
    }
    val = 1;
    for (int i = 26; i < 39; i++)
    {
        list[i].value = val++;
        list[i].suit = 'h';
    }
    val = 1;
    for (int i = 39; i < 52; i++)
    {
        list[i].value = val++;
        list[i].suit = 's';
    }

    // 구조체 배열 값 출력하기
    for (int i = 0; i < 52; i++)
        printf("%d:%c ", list[i].value, list[i].suit);
    return 0;
}