#include <stdio.h>

// 키보드에서 하나의 문자를 읽어 모음과자음을 구분-switch문 이용
int main() {
    char data;
    printf("문자를 입력하시오: ");
    data = getchar();

    switch (data)
    {
    case 'a':
        printf("모음입니다.\n");
        break;
    case 'e':
        printf("모음입니다.\n");
        break;
    case 'i':
        printf("모음입니다.\n");
        break;
    case 'o':
        printf("모음입니다.\n");
        break;
    case 'u':
        printf("모음입니다.\n");
        break;
    default:
        break;
    }

    return 0;
}