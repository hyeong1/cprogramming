// ü�� �� 16�ǽ�
// ŷ 1, �� 1, �� 2, ��� 2, ����Ʈ 2, �� 8
// ���� �ǽ� ���� �Է�  --> �� ���� ���ϰų� ���� ��Ʈ�� �Ǵ��� ���
// ŷ, ��, ��, ���, ����Ʈ, �� ������ �Է�
#include <stdio.h>

int main()
{
    int king, queen, rook, bishop, knight, pawn;
    printf("�߰��� �ǽ� ���� �Է�: ");
    scanf("%d %d %d %d %d %d", &king, &queen, &rook, &bishop, &knight, &pawn);

    printf("%d %d %d %d %d %d\n", 1-king, 1-queen, 2-rook, 2-bishop, 2-knight, 8-pawn);    

    return 0;
}