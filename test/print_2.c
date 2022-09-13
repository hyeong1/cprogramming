// 체스 총 16피스
// 킹 1, 퀸 1, 룩 2, 비숍 2, 나이트 2, 폰 8
// 현재 피스 개수 입력  --> 몇 개를 더하거나 빼야 세트가 되는지 출력
// 킹, 퀸, 룩, 비숍, 나이트, 폰 순서로 입력
#include <stdio.h>

int main()
{
    int king, queen, rook, bishop, knight, pawn;
    printf("발견한 피스 개수 입력: ");
    scanf("%d %d %d %d %d %d", &king, &queen, &rook, &bishop, &knight, &pawn);

    printf("%d %d %d %d %d %d\n", 1-king, 1-queen, 2-rook, 2-bishop, 2-knight, 8-pawn);    

    return 0;
}