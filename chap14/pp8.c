// ũ�Ⱑ 3*3�� 2���� �迭�� �ٸ� 2���� �迭�� �����ϴ� �Լ� void array_copy(int src[][WIDTH], int dist[][WIDTH]) ����
// �迭 ÷�� ��� ��� ������ ���
#include <stdio.h>

void array_copy(int src[][3], int dist[][3]);
void print_array(int arr[][3]);

int main()
{
    int original[3][3] = {{100, 200, 300},
                          {10, 20, 30},
                          (1, 2, 3)};
    int copyArr[3][3] = {0}; // ������ �迭

    array_copy(original, copyArr);
    
    printf("���� �迭\n");
    print_array(original);
    printf("���� �迭\n");
    print_array(copyArr);

    return 0;
}

void array_copy(int src[][3], int dist[][3])
{
    for (int i = 0;i < 3;i++) // ��
    {
        for (int j = 0;j < 3;j++) // ��
            *(*(dist+i)+j) = *(*(src+i)+j); // ���� ��ȣ(i)�� �� ����, �� ��ȣ(j)�� �� ����
    }
}

void print_array(int arr[][3])
{
    for (int i = 0;i < 3;i++)
    {
        for (int j = 0;j < 3;j++)
            printf("%d ", *(*(arr+i)+j));
        printf("\n");
    }
}
