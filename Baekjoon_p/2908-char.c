// �Էµ� ���� �Ųٷ� ���ϱ� - ���ڿ� Ǯ��
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char num1[4] = {0}, num2[4] = {0}, reNum1[4] = {0}, reNum2[4] = {0}; // ���� �Է� �迭�̶� �Ųٷ� �迭
    int num1ToInt, num2ToInt, j;
    scanf("%s %s", num1, num2);

    // ���� �Ųٷ� �ؼ� ���ο� �迭 reNum1, reNum2�� ����
    j = 2;
    for (int i = 0; i < 3; i++)
    {
        reNum1[j] = num1[i];
        reNum2[j] = num2[i];
        j--;
    }

    num1ToInt = atoi(reNum1); // ���� �Ųٷ� �迭 ������ �ٲٱ�
    num2ToInt = atoi(reNum2); // ���� �Ųٷ� �迭 ������ �ٲٱ�

    // ũ�� ��
    if (num1ToInt > num2ToInt)
        printf("%d", num1ToInt);
    else if (num1ToInt < num2ToInt)
        printf("%d", num2ToInt);

    return 0;
}
