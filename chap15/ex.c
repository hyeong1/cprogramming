// 파일에서 특정 문자열 탐색
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *fp;
    char fname[128];
    char buffer[256];
    char word[256];
    int line_num = 0;

    printf("입력 파일 이름을 입력하시오: ");
    scanf("%s", fname);
    printf("탐색할 단어를 입력하시오: ");
    scanf("%s", word);

    // 파일을 읽기 모드로 열기
    if ((fp = fopen(fname, "r")) == NULL)
    {
        fprintf(stderr, "파일 %s을/를 열 수 없습니다.\n", fname);
        exit(1);
    }
    while (fgets(buffer, 256, fp))
    {
        line_num++;
        if (strstr(buffer, word))
            printf("%s: %d번째 줄에서 %s이/가 발견되었습니다.\n", fname, line_num, word);
    }
    fclose(fp);

    return 0;
}