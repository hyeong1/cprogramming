#include <stdio.h>

int main()
{
    //사용자가 아스키코드 값을 입력하면 해당하는 문자를 출력하는 프로그램

    //입력받은 수는 정수형 변수에 저장한다.
    int inputNum;

    printf("아스키 코드값을 입력하시오: ");
    scanf("%d", &inputNum);

    //출력은 %c로 형변환하여 출력한다.
    printf("문자: %c입니다.", inputNum);

    return 0;
}