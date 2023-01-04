#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// sizes_rows는 2차원 배열 sizes의 행 길이, sizes_cols는 2차원 배열 sizes의 열 길이입니다.
int solution(int (*sizes)[2], int sizes_rows, int sizes_cols)
{
    int maxW, maxH, minRectangle, newRectangle; // 최대 가로 크기, 최대 세로 크기, 최소 직사각형 크기
    int temp;

    // 2차원 배열 처음 상태에서 최소 직사각형 크기 구하기
    // 먼저 최대 가로 크기, 최대 세로 크기 구하기
    maxW = sizes[0][0];
    maxH = sizes[0][1];
    for (int i = 1; i < sizes_rows; i++)
    {
        if (maxW < sizes[i][0])
            maxW = sizes[i][0];
        if (maxH < sizes[i][1])
            maxH = sizes[i][1];
    }
    // 최소 직사각형 크기 구하기
    minRectangle = maxW * maxH;

    // 세로 길이가 가로 길이보다 큰 경우 가로, 세로 위치 바꿔서 새로운 최소 직사각형 크기 구하기
    for (int i = 0; i < sizes_rows; i++)
    {
        if (sizes[i][0] < sizes[i][1])
        { // 가로보다 세로가 더 크면
            temp = sizes[i][0];
            sizes[i][0] = sizes[i][1];
            sizes[i][1] = temp; // 가로, 세로 위치 바꾸기
        }
    }
    // 새로운 최소 직사각형 구하기
    maxW = sizes[0][0];
    maxH = sizes[0][1];
    for (int i = 1; i < sizes_rows; i++)
    {
        if (maxW < sizes[i][0])
            maxW = sizes[i][0];
        if (maxH < sizes[i][1])
            maxH = sizes[i][1];
    }
    newRectangle = maxW * maxH;

    // 새로운 최소 직사각형과 전에 구한 최소 직사각형 크기 비교
    if (minRectangle > newRectangle) // 전에 구한 최소 직사각형이 더 크면
        minRectangle = newRectangle; // 최종 최소 직사각형 크기 바꾸기

    return minRectangle;
}

int main()
{
    int sizes[4][2] = {{60, 50},
                       {30, 70},
                       {60, 30},
                       {80, 40}};

    printf("%d\n", solution(sizes, 4, 2));
}