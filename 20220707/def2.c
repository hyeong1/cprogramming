#include <stdio.h>

char check_alpha() {
    char ch;
    printf("���ڸ� �Է��Ͻÿ�: ");
    ch = getchar();

    if (ch >= 'a' && ch <= 'z')
        printf("%c�� ���ĺ� �����Դϴ�.", ch);

    return 0;
}

int main() {    
    check_alpha();

    return 0;
}