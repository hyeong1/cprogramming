// ������ �����Ͽ� ��ȯ�ϴ� �Լ� GetRandom() �ۼ��ϰ� �׽�Ʈ
// ���� ���� ���� �� ���� �ʱ�ȭ �ϱ�
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void GetRandom();

int main()
{
    GetRandom();
    GetRandom();
    GetRandom();

    return 0;
}

void GetRandom()
{
    static int inited = 0;
    if (!inited)
    {   
        printf("�ʱ�ȭ ����\n");
        srand(time(NULL));
        inited++;
    }
    else
        printf("%d\n", rand());
}