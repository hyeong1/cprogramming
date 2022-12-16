// 이중포인터 연습문제1
// 5개 정도의 속담을 문자열의 형태로 함수 SetProverb() 내부에 저장
// 함수 호출 시 인수로 받은 이중포인터를 이용하여 외부에 있는 char형 포인터 s를 설정
#include <stdio.h>
#include <string.h>

void SetProverb(char **p,int n);

int main()
{
    int find;
    char *f;
    printf("몇 번째 속담을 선택하시겠습니까?");
    scanf("%d", &find);

    SetProverb(&f, find);
    printf("selected proverb = %s\n", f);

    return 0;
}

void SetProverb(char **p,int n)
{
    char *str[3] = {"hi", "hello", "wow"};
    *p = str[n-1]; 
}