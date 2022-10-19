#include <stdio.h>

int main()
{
    // 변수 i 선언 후 사용자에게 입력받기
    // 포인터 변수 pi 선언 후 i의 주소 참조
    int i;
    int *pi = NULL;
    scanf("%d", &i);

    pi = &i; // 포인터변수 pi는 i의 주소를 참조

    printf("%d\n", i); // i에 저장된 정수
    // printf("%d\n", *pi); // pi가 참조하는 i의 값 - 간접참조
    // printf("%d\n", &i); // i의 주소
    // printf("%d\n", pi); // pi에 저장된 값 (i의 주소)

    // *: 곱하기, 값, 간접참조연산자(값을 가져올 때, 어떤 주소에 값을 넣을 때), 포인터(변수 선언할 때)
    // *pi = &i;(--> *:포인터) , printf("%d", *pi);(--> *:간접참조)

    // 포인터변수를 통해서 j에 값 넣기
    int j;
    int *pj = &j; // 정수형 j에 대한 포인터변수이므로 포인터변수도 정수형
    scanf("%d", pj);
    printf("%d %d %d\n", j, *pj, pj);

    return 0;
}