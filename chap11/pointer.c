#include <stdio.h>

int main()
{ // *: 값, &: 주소
    // int *p = NULL; // 포인터변수는 null로 초기화
    int i = 10;
    int *pi = &i; // i의 주소를 포인터변수 pi에 저장 - 포인터변수는 항상 4바이트
    // pi i의 주소, *pi pi가 가르키는 i의 값 참조(i의 내용), &pi pi의 주소

    printf("%d\n", i);
    printf("%d\n", *pi);
    printf("%d\n", &i); // i의 주소
    printf("%d\n", pi); // pi에 저장된 값 (i의 주소)

    return 0;
}