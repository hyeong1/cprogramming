// 파일입출력
#include <stdio.h>

int main()
{
    char str[50];
    FILE *fHello;
    fHello = fopen("test.txt", "r"); // 파일 열기 
    //fprintf(fHello, "%s\n", "Hello World!"); // 파일에 쓰기
    fscanf(fHello, "%s", str);
    printf("%s\n", str);
    fclose(fHello);
    return 0;
}