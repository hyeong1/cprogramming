// 3���� ������
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int solution(int n)
{
    int answer = 0, dupN;
    int triadSize = 0;
    int *triadN;

    // n -> 3���� ��ȯ
    dupN = n;
    while (dupN > 0)
    { // 3���� ��Ʈ�� ���ϱ�
        dupN /= 3;
        triadSize++; // 3���� ũ��
    }
    triadN = (int *)malloc(sizeof(int) * triadSize); // ��Ʈ����ŭ 3���� �迭 ���� �Ҵ�

    for (int i = 0; i < triadSize; i++)
    {
        triadN[i] = n % 3;
        n /= 3;
    }

    // 3���� -> 10���� ��ȯ
    for (int i = 0; i < triadSize; i++)
        answer += (triadN[triadSize - 1 - i] * pow(3, i));
    return answer;
}

int main()
{
    printf("%d\n", solution(45));  // 7
    printf("%d\n", solution(125)); // 229
    return 0;
}