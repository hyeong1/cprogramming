// ox����
#include <stdio.h>
#include <string.h>

int main()
{
    int c, scoreSum, score;
    char resultOX[80];
    scanf("%d", &c);

    // �׽�Ʈ ���̽� c�� �ݺ�
    for (int i = 0;i < c;i++)
    {
        scoreSum = 0; // ��ü ���� ���� ����
        score = 0; // ���� �ϳ��� ������ ������ ����
        scanf("%s", resultOX);
        int resultLen = strlen(resultOX); // �Է¹��� ox����� �� ����-�ΰ� ������ ���ڿ��� ����
        for (int i = 0;i < resultLen;i++) 
        {
            if (resultOX[i] == 'X') // X�� ���� 0��  "",''
                score = 0;
            else if (resultOX[i] == 'O') // O�� ���� 1��
            {   // �ٷ� score = 1;���� �ʰ� �� ���� �� �� �� ��
                if (resultOX[i-1] == 'O') // �� ���ڵ� O�� 
                    score++; // score�� ���� ����
                else
                    score = 1; // �ƴϸ� score = 1�� �ʱ�ȭ
            }  
            scoreSum += score;
        }
        printf("%d\n", scoreSum);
    }
    return 0;    
}