// ���������
#include <stdio.h>

int main()
{
    char str[50];
    FILE *fHello;
    fHello = fopen("test.txt", "r"); // ���� ����
    // fprintf(fHello, "%s\n", "Hello World!"); // ���Ͽ� ����
    fscanf(fHello, "%s", str); // ���Ͽ� �ִ� ���ڿ� main���� �������� -> ���� ó�� ���ڿ��� ������ (���� �ֱ� �������� ���ڿ�)
    printf("%s\n", str);
    fclose(fHello);
    return 0;
}