// 동적 메모리 할당 연습문제 2
// 길이가 100인 n개의 문자열을 저장하는데 필요한 동적 메모리 할당
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size;
    char **str = NULL;
    printf("문자열의 개수: ");
    scanf("%d", &size);

    // 2차원 배열 동적 할당
    str = (char **)malloc(size * sizeof(char *)); // 방 개수 동적 할당
    for (int i = 0; i < size; i++)
        str[i] = (char *)malloc(100); // 방 하나의 크기 100으로 지정

    // 문자열 입력
    printf("문자열 입력: ");
    for (int i = 0;i < size;i++)
        scanf("%s", str[i]);
    // 문자열 출력
    printf("입력된 문자열\n");
    for (int i = 0;i < size;i++)
        printf("%s\n", str[i]);
        
    return 0;
}