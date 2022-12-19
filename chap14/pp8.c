// 크기가 3*3인 2차원 배열을 다른 2차원 배열로 복사하는 함수 void array_copy(int src[][WIDTH], int dist[][WIDTH]) 구현
// 배열 첨자 방법 대신 포인터 사용
#include <stdio.h>
#define WIDTH 3
#define HEIGHT 3

void array_copy(int src[][WIDTH], int dist[][WIDTH]);
void print_array(int arr[][WIDTH]);

int main()
{
    int original[HEIGHT][WIDTH] = {{100, 200, 300},
                                   {10, 20, 30},
                                   (1, 2, 3)};
    int copyArr[HEIGHT][WIDTH] = {0}; // 복사할 배열

    array_copy(original, copyArr);

    printf("원본 배열\n");
    print_array(original);
    printf("복사 배열\n");
    print_array(copyArr);

    return 0;
}

void array_copy(int src[][WIDTH], int dist[][WIDTH])
{
    for (int i = 0; i < HEIGHT; i++) // 행
    {
        for (int j = 0; j < WIDTH; j++)             // 열
            *(*(dist + i) + j) = *(*(src + i) + j); // 안쪽 괄호(i)가 행 증가, 밖 괄호(j)가 열 증가
    }
}

void print_array(int arr[][WIDTH])
{
    for (int i = 0; i < HEIGHT; i++)
    {
        for (int j = 0; j < WIDTH; j++)
            printf("%d ", *(*(arr + i) + j));
        printf("\n");
    }
}