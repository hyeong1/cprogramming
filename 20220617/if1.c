#include <stdio.h>

int main() {
    char data;
    printf("���ڸ� �Է��Ͻÿ�: ");
    data = getchar();

    switch (data)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        printf("�����Դϴ�.");
        break;
    
    default:
        break;
    }

    return 0;
}