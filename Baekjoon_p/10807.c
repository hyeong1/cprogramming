#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, find, findNum; // �Է��� ������ ����, �� ������ ã�� ���� ����, find ���� ����
    scanf("%d", &n); // �Է��� ������ ���� �Է�
    int *num = (int*)malloc(sizeof(int) * n); // �迭 n��ŭ �����Ҵ�
    for (int i = 0;i < n;i++)
        scanf("%d", &num[i]); // �迭�� ���� �Է�
    
    scanf("%d", &find); // �� ������ ã�� ���� ���� �Է�
    findNum = 0;
    for (int i = 0;i < n;i++)
    {
        if (find == num[i])
            findNum++;
    }
    printf("%d", findNum);

    return 0;
}