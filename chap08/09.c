// rand()함수 를 이용하여 0또는 1값을 무작위로 반환하는 함수 b_rand()작성, 5번 호출
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
int b_rand();

int main()
{
    srand(time(NULL));
    for (int i = 0;i < 5;i++)
        printf("%d ", b_rand()); 

    return 0;
}

int b_rand()
{
    return rand() % 2;
}*/

void b_rand()
{
    printf("%d ", rand() % 2);
}

int main()
{
    for (int i = 0;i < 5;i++)
        b_rand();
    return 0;
}