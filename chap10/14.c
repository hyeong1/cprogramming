// n*m 크기의 타일로 구성된 방안에 딱정벌레가 있다.
// 딱정벌레는 임의의 위치를 선택하여 여기저기 걸어다닌다.
// 현재의 위치에서 주위의 8개 타일로 걸어가는 확률은 동일하다고 가정했을 때, 딱정벌레의 이동경로를 표시하라
// 시작위치는 중앙이라고 가정한다.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void move(int title[][20]);
int main()
{
    int title[10][20] = {0};
    
    srand(time(NULL));
    move(title);
    
    // 화면 출력
    for (int i = 0;i < 10;i++)
    {
        for (int j = 0;j < 20;j++)
        {
            if (title[i][j] == 0)
                printf(".");
            else
                printf("*");
        }
        printf("\n");
    }

    return 0;
}

void move(int title[][20])
{
    int centerRow = 4, centerCol = 9;
    // 8번 이동
    for (int i = 0;i < 8;i++)
    {
        int number = rand() % 8;
        switch (number)
        {
        case 0: // 0이면 북쪽
            centerRow--;
            title[centerRow][centerCol] = 1;
            break;
        case 1: // 1이면 북동쪽
            centerRow--;
            centerCol++;
            title[centerRow][centerCol] = 1;
            break;
        case 2: 
            centerCol++;
            title[centerRow][centerCol] = 1;
            break;
        case 3: 
            centerRow++;
            centerCol++;
            title[centerRow][centerCol] = 1;
            break;
        case 4: 
            centerRow++;
            title[centerRow][centerCol] = 1;
            break;
        case 5: 
            centerRow++;
            centerCol--;
            title[centerRow][centerCol] = 1;
            break;
        case 6: 
            centerRow--;
            title[centerRow][centerCol] = 1;
            break;
        case 7: 
            centerRow--;
            centerCol--;
            title[centerRow][centerCol] = 1;
            break;
        default:
            break;
        }
    }
}