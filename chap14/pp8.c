// ũ�Ⱑ 3*3�� 2���� �迭�� �ٸ� 2���� �迭�� �����ϴ� �Լ� void array_copy(int src[][WIDTH], int dist[][WIDTH]) ����
// �迭 ÷�� ��� ��� ������ ���
#include <stdio.h>
#define WIDTH 3
#define HEIGHT 3

void array_copy(int src[][WIDTH], int dist[][WIDTH]);
void print_array(int arr[][WIDTH]);

int main()
{
    int original[HEIGHT][WIDTH] = {{100, 200, 300},
                                   {10, 20, 30},
                                   (1, 2, 3)};
    int copyArr[HEIGHT][WIDTH] = {0}; // ������ �迭

    array_copy(original, copyArr);

    printf("���� �迭\n");
    print_array(original);
    printf("���� �迭\n");
    print_array(copyArr);

    return 0;
}

void array_copy(int src[][WIDTH], int dist[][WIDTH])
{
    for (int i = 0; i < HEIGHT; i++) // ��
    {
        for (int j = 0; j < WIDTH; j++)             // ��
            *(*(dist + i) + j) = *(*(src + i) + j); // ���� ��ȣ(i)�� �� ����, �� ��ȣ(j)�� �� ����
    }
}

void print_array(int arr[][WIDTH])
{
    for (int i = 0; i < HEIGHT; i++)
    {
        for (int j = 0; j < WIDTH; j++)
            printf("%d ", *(*(arr + i) + j));
        printf("\n");
    }
}