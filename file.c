// ���������
#include <stdio.h>

int main()
{
    char str[50];
    FILE *fHello;
    fHello = fopen("test.txt", "r"); // ���� ���� 
    //fprintf(fHello, "%s\n", "Hello World!"); // ���Ͽ� ����
    fscanf(fHello, "%s", str);
    printf("%s\n", str);
    fclose(fHello);
    return 0;
}