// 1���� �迭 ������
// ������ ����ؼ� n���� ���� �߿��� �ּڰ��� �ִ� ���ϱ�
#include <stdio.h>
#include <stdlib.h>

int main()
{
    // int data[5] = {1, 2, 3, 4, 5};
    // int* pData = data;
    // for (int i = 0;i < 5;i++)
    //     printf("%d\n", *(pData+i));

    int input, max, min;
    int *data; //*pData
    scanf("%d", &input);

    data = (int *)calloc(sizeof(int), input); // malloc, calloc -> calloc���� �ڵ����� 0���� �ʱ�ȭ(calloc�� �Ű������� 2��)/malloc�� �ʱ�ȭ�� �����༭ �����Ⱚ�� ��
    for (int i = 0; i < input; i++)
        scanf("%d", &data[i]);

    // pData = data; // pData��� ������ ������ data�迭 �ֱ�

    max = *data;
    min = *data;
    for (int i = 1; i < input; i++)
    {
        if (max < *(data + i))
            max = *(data + i);
        if (min > *(data + i))
            min = *(data + i);
    }
    printf("%d ", min);
    printf("%d\n", max);

    free(data); // malloc���� �Ҵ�� �޸� ����ֱ�
    return 0;
}