// ���� ���� 90~100 A, 80~89 B, 70~79 C, 60~69 D, ������ F ���
// ������ 0 ���� ũ�ų� ����, 100 ���� �۰ų� ���� ����
#include <stdio.h>

int main()
{
    int score;
    printf("����: ");
    scanf("%d", &score);

    if (score > 89)
        printf("A\n");
    else if (score > 79)
        printf("B\n");
    else if (score > 69)
        printf("C\n");
    else if (score > 59) 
        printf("D\n");
    else 
        printf("F\n");

    return 0;
}