#include <stdio.h>

int main()
{
    int sound[8], start1, start8, check;
    for (int i = 0;i < 8;i++)
        scanf("%d", &sound[i]);
    
    // 1~8���� 8~1���� �˻�
    start1 = 1;
    start8 = 8;
    if (sound[0] == start1) // 1���� ����
    {
        for (int i = 1;i < 8;i++) // 0���� �̹� �������� 1���� ��
        {
            start1++;
            if (sound[i] == start1)
                check = 0; // 1���� 8������ check���� 0���� �ʱ�ȭ
            else
            {
                printf("mixed");
                check = 2;
                break;
            }
        }
        if (check == 0)
            printf("ascending");
    }
    else if (sound[0] == start8) // 8���� ����
    {
        for (int i = 1;i < 8;i++) // 0���� �̹� �������� 1���� ��
        {
            start8--;
            if (sound[i] == start8)
                check = 1; // 8���� 1������ check���� 1�� �ʱ�ȭ
            else
            {
                printf("mixed");
                check = 2;
                break;
            }
        }
        if (check == 1)
            printf("descending");
    }
    else
        printf("mixed");

    return 0;
}