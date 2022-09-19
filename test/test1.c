#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void insertHead(int* ap, int size);
void insertBottom(int* ap, int size);

int main()
{
    int input, size;
    int head[10000];
    int bottom[10000];

    size = 100;

    printf("번호 입력: ");
    scanf("%d", &input);

    insertHead(head, size);
    insertBottom(bottom, size);

    printf("%d/%d\n", head[input - 1], bottom[input - 1]);
    /*
    int place = 0;
    int ap[100];
    for (int i = 1; i <= 5; i += 2)
    {
        for (int j = 1; j < i; j++)
        {
            ap[place] = j;
            printf("%d번방: %d\n", place, j);
            place++;
        }
        for (int j = i; j >= 1; j--)
        {
            ap[place] = j;
            printf("%d번방: %d\n", place, j);
            place++;
            
        }
    }*/
    /*
    //1, 1, 2, 3, 2, 1, 1, 2, 3, 4, 5, 4, 3, 2, 1 출력
    for (int i = 1; i <= 5;i += 2)
    {
        for (int j = 1;j < i;j++)
            printf("%d ", j);
        for (int j = i;j >= 1;j--)
            printf("%d ", j);
    }
    printf("\n");
    //1, 2, 1, 1, 2, 3, 4, 3, 2, 1, 1, 2, 3, 4, 5, 6, 5, 4, 3, 2, 1 출력
    for (int i = 2; i <= 6; i += 2)
    {
        for (int j = 1; j < i; j++)
            printf("%d ", j);
        for (int j = i; j >= 1; j--)
            printf("%d ", j);
    }*/

    return 0;
}

void insertHead(int* ap, int size)
{
    int place = 0; // 배열 주소 변수
    for (int i = 1; i <= size; i += 2)
    {
        for (int j = 1; j < i; j++)
        {
            ap[place] = j; // 배열 안에 들어가는 수는 j
            place++;
        }
        for (int j = i; j >= 1; j--)
        {
            ap[place] = j;
            place++;
        }
    }
}

void insertBottom(int* ap, int size)
{
    int place = 0;   // 배열 주소 변수
    for (int i = 2; i <= size; i += 2)
    {
        for (int j = 1; j < i; j++)
        {
            ap[place] = j;
            place++;
        }
        for (int j = i; j >= 1; j--)
        {
            ap[place] = j;
            place++;
        }
    }
}