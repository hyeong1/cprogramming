// ���ڿ� �ݺ�
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void RepeatArr(char *s, char *p, int size, int r);

int main()
{
    char inputS[20], outputS[200] = {'\0'};
    int t, r, size, index; // �� �ݺ�, ���� �ݺ��� Ƚ��, inputS�� ũ��, outputS�� �ε��� ����
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        scanf("%d %s", &r, &inputS);
        size = strlen(inputS);

        RepeatArr(inputS, outputS, size, r);
        memset(outputS, 0, sizeof(outputS)); // outputS ����
    }

    return 0;
}

void RepeatArr(char *s, char *p, int size, int r)
{
    int index = 0; // outputS�� �ε���
    for (int i = 0; i <= size; i++)
    {
        for (int j = 0; j < r; j++) // r�� �ݺ�
        {
            p[index] = s[i];
            index++;
        }
    }
    printf("%s\n", p);
}