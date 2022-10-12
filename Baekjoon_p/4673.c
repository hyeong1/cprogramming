// �����ѹ� ����ϱ�
#include <stdio.h>

void FindSelfNumber(int *arr);

int main()
{
    int selfNum[10001] = {0};

    FindSelfNumber(selfNum);

    // �����ѹ� �˻� �� ���
    for (int i = 1;i < 10001;i++)
    {
        if (selfNum[i] == 0)
            printf("%d\n", i);
    }
    return 0;
}

void FindSelfNumber(int *arr)
{
    int index;
    for (int i = 1;i <= 10000;i++)
    {
        if (i < 10) // �� �ڸ���
        {
            index = i + i;
            arr[index]++;
        }
        else if (i < 100) // �� �ڸ���
        {
            index = i + i/10 + i%10;
            arr[index]++;
        }
        else if (i < 1000) // 3�ڸ���
        {
            index = i+ i/100 + (i%100)/10 + (i%100)%10;
            arr[index]++;
        }
        else // �� �ڸ���
        {
            index = i + i/1000 + (i%1000)/100 + ((i%1000)%100)/10 + ((i%1000)%100)%10;
            if (index <= 10000) // d(i)�� ���� 10000���� �۰ų� ������
                arr[index]++; // selfNum �迭 �ε��� ++;
        }
    }
}