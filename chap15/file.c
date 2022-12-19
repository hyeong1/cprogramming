// 파일입출력
#include <stdio.h>

int main()
{
    char str[50];
    FILE *fHello;
    fHello = fopen("test.txt", "r"); // 파일 열기
    // fprintf(fHello, "%s\n", "Hello World!"); // 파일에 쓰기
    fscanf(fHello, "%s", str); // 파일에 있는 문자열 main으로 가져오기 -> 제일 처음 문자열만 가져옴 (공백 있기 전까지의 문자열)
    printf("%s\n", str);
    fclose(fHello);
    return 0;
}