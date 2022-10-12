#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, Q1 = 0, Q2 = 0, Q3 = 0, Q4 = 0, AXIS = 0;
    scanf("%d", &n);
    
    int** xy = (int**)malloc(sizeof(int*) * n); // n만큼의 행
    for (int i = 0;i < n;i++)
        xy[i] = (int*)malloc(sizeof(int) * 2); // 좌표니까 행 하나당 2열
    // 좌표 입력
    for (int i = 0;i < n;i++)
    {
        for (int j = 0;j < 2;j++)
            scanf("%d", &xy[i][j]);
    }

    // 좌표 검사
    for (int i = 0;i < n;i++) // n번 반복
    {
        if (xy[i][0] == 0 || xy[i][1] == 0) // x값 또는 y값이 0이면 촉에 존재
            AXIS++;
        else
        {
            if (xy[i][0] > 0) // x값이 양수일 때
            {
                if (xy[i][1] > 0) // y값도 양수면
                    Q1++; // 1사분면에 존재
                else // y값이 음수면
                    Q4++; // 4사분면에 존재
            }
            else // x값이 음수일 때
            {
                if (xy[i][1] > 0) // y값이 양수면
                    Q2++; // 2사분면에 존재
                else // y값이 음수면
                    Q3++; // 3사분면에 존재
            }
        }
    }

    printf("Q1: %d\nQ2: %d\nQ3: %d\nQ4: %d\nAXIS: %d\n", Q1, Q2, Q3, Q4, AXIS);

    return 0;
}