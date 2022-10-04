// n*m ũ���� Ÿ�Ϸ� ������ ��ȿ� ���������� �ִ�.
// ���������� ������ ��ġ�� �����Ͽ� �������� �ɾ�ٴѴ�.
// ������ ��ġ���� ������ 8�� Ÿ�Ϸ� �ɾ�� Ȯ���� �����ϴٰ� �������� ��, ���������� �̵���θ� ǥ���϶�
// ������ġ�� �߾��̶�� �����Ѵ�.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void move(int title[][20]);
int main()
{
    int title[10][20] = {0};
    
    srand(time(NULL));
    move(title);
    
    // ȭ�� ���
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
    // 8�� �̵�
    for (int i = 0;i < 8;i++)
    {
        int number = rand() % 8;
        switch (number)
        {
        case 0: // 0�̸� ����
            centerRow--;
            title[centerRow][centerCol] = 1;
            break;
        case 1: // 1�̸� �ϵ���
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