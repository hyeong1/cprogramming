// 준하는 사이트에 회원가입을 하다가 joonas라는 아이디가 이미 존재하는 것을 보고 놀랐다. 
// 준하는 놀람을 ??!로 표현한다. 
// 준하가 가입하려고 하는 사이트에 이미 존재하는 아이디가 주어졌을 때, 놀람을 표현하는 프로그램을 작성하시오.
#include <stdio.h>

int main()
{
    char inputId[50];

    // 문자열 입력 받기
    scanf("%[^\n]s", inputId); // 공백까지 표함해서 문자열 받기
    printf("%s?\?!\n", inputId);
    
    return 0;
}