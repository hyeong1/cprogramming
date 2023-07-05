// 선택정렬
#include <stdio.h>
#include <stdlib.h>

typedef struct Player
{
    int rank;
    int score;
    int playerNum;
} Player;

void SelectionSort(Player *player, int size)
{
    int maxIdx;
    Player temp;

    for (int i = 0; i < size - 1; i++)
    {
        maxIdx = i;
        for (int j = i + 1; j < size; j++) // 최솟값 탐색
        {
            if (player[j].score < player[maxIdx].score)
                maxIdx = j;
            else if ((player[j].score == player[maxIdx].score) && (player[j].playerNum < player[maxIdx].playerNum))
                maxIdx = j;
        }
        // 교환
        temp = player[i];
        player[i] = player[maxIdx];
        player[maxIdx] = temp;
    }
}

int main()
{
    Player player[3];
    player[0].playerNum = 2;
    player[0].score = 123;

    player[1].playerNum = 1;
    player[1].score = 123;

    player[2].playerNum = 3;
    player[2].score = 1234;

    SelectionSort(player, sizeof(player)/sizeof(Player));
    for (int i = 0; i < 3; i++)
    {
        printf("%d : %d\n", player[i].playerNum, player[i].score);
    }

    return 0;
}