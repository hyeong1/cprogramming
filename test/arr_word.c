// 5���� �ܾ �Է¹޾Ƽ� ���η� ����ϱ�
// abc, ABC, 123 --> aA1, bB2, cC3
#include <stdio.h>

int main()
{
    char word[5][15] = {'\0'}; // �ܾ� �Է¹��� �迭 ���� - �ΰ����� �ʱ�ȭ

    for (int i = 0; i < 5; i++)
        scanf("%s", &word[i]); // �ܾ� �Է¹ޱ�

    // �ܾ� ���
    for (int j = 0; j < 15; j++) // �� �� ��ŭ �ݺ�
    {
        for (int i = 0; i < 5; i++) // �� �� ��ŭ �ݺ�
        {
            if (word[i][j] != '\0')       // �� ���� �ƴϸ� ���
                printf("%c", word[i][j]); // i���� j�� ���� ���
        }
    }
    return 0;
}