// 텍스트 파일에 들어 있는 문자들을 모두 대문자로 변경하여 새로운 파일에 저장
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    char fname1[100], fname2[100], str[100];

    printf("첫번째 파일 이름: ");
    scanf("%s", fname1); // 문자열을 가져올 파일 이름
    printf("두번째 파일 이름: ");
    scanf("%s", fname2); // 대문자로 변경하여 저장할 새로운 파일 이름

    if ((fp = fopen(fname1, "r")) == NULL)
    {
        fprintf(stderr, "성적 파일 %s을/를 열 수 없습니다.\n", fname1);
        exit(1);
    }
    // 문자열을 가져와서 모두 대문자로 변경
    fgets(str, 100, fp);
    for (int i = 0;i < strlen(str);i++)
        str[i] = toupper(str[i]);
    fclose(fp);

    // 새로운 파일에 저장
    if ((fp = fopen(fname2, "w")) == NULL)
    {
        fprintf(stderr, "성적 파일 %s을/를 열 수 없습니다.\n", fname2);
        exit(1);
    }
    fprintf(fp, "%s", str);
    fclose(fp);

    return 0;
}