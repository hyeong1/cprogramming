// �ֻ����� ������ ������ ���� �� �� ���Դ��� ����ϴ� ���α׷� �ۼ�
// �ֻ����� ���� ������ �̿��Ͽ� ����
// �ֻ����� ������ �Լ� ����� �Լ� �ȿ��� ������ ���� ���� ������ �� Ƚ���� ���� ���� ������ �̿��Ͽ� ���
// �� �Լ��� ȣ�� ȸ���� 100�� �Ǹ� �� ���� Ƚ�� ���
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void GetDiceFace();

int main()
{
    srand(time(NULL));
    GetDiceFace();
    return 0;
}

void GetDiceFace()
{
    static int count = 0;
    static int count1 = 0;
    static int count2 = 0;
    static int count3 = 0;
    static int count4 = 0;
    static int count5 = 0;
    static int count6 = 0;
    
    do
    {
        count++;
        int dice = rand() % 6 + 1;
        if (dice == 1)
            count1++;
        else if (dice == 2)
            count2++;
        else if (dice == 3)
            count3++;
        else if (dice == 4)
            count4++;
        else if (dice == 5)
            count5++;
        else
            count6++;

    } while (count != 100);
    printf("1->%d\n", count1);
    printf("2->%d\n", count2);
    printf("3->%d\n", count3);
    printf("4->%d\n", count4);
    printf("5->%d\n", count5);
    printf("6->%d\n", count6);    
}