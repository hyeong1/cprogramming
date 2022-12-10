// 이중포인터 연습문제 4
// 문자열의 배열을 인수로 받아서 저장된 문자열을 전부 출력하는 함수 작성 및 테스트
#include <stdio.h>

void PrintStrArray(char **dp, int size); // 출력함수

int main()
{
    //char* strArr[3] = {"hello world", "nice to meet", "have a good"};
    
    char *strArray[3] = {"Iphone", "Google", "Motolora"}; // 문자열을 저장할 배열
    int size = sizeof(strArray)/sizeof(strArray[0]); // strArray 배열의 행 크기를 나타내는 변수(전체 배열 크기/배열 행 한 개 크기 == 행 개수)
    PrintStrArray(strArray, size); // 배열 이름은 배열의 첫 번째 주소
    
    return 0;
}

void PrintStrArray(char **dp, int size)
{
    for (int i = 0;i < size;i++)
        printf("%s\n", *(dp+i));
}