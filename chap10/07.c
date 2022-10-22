// 1���� 10������ ������ ���Ͽ� �������� ���������� ����Ͽ� ���
// 10*3 ũ���� 2���� �迭�� ù ��° ��-����, �� ��° ��-���鰪, �� ��° ��-�������� ����
// �߰��� ����ڿ��� ���������� �޾� �ش� ���������� ���
#include <stdio.h>

void PrintArr(int (*arr)[3]);     // �迭 ��� �Լ�(�� ������ Ȯ��)
void InsertArr(int (*arr)[3]);    // 2���� �迭 ���� ä��� �Լ�
void SearchSquare(int (*arr)[3]); // ����ڿ��� ���������� �޾Ƽ� �ش� ���������� ����ϴ� �Լ�

int main()
{
    int square[10][3];

    InsertArr(square);
    PrintArr(square);
    SearchSquare(square);

    return 0;
}

void PrintArr(int (*arr)[3])
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 3; j++)
            printf("%d\t", arr[i][j]);
        printf("\n");
    }
}

void InsertArr(int (*arr)[3])
{
    int input = 1;               // �迭�� �� ��� ����
    for (int i = 0; i < 10; i++) // ù ��° ��-���� �ֱ�
    {
        arr[i][0] = input;
        input++;
    }
    for (int i = 0; i < 10; i++)
    {
        arr[i][1] = arr[i][0] * arr[i][0];             // �� ��° ������ ù ���� �� ���� ������ �ֱ�
        arr[i][2] = arr[i][0] * arr[i][0] * arr[i][0]; // �� ��° ������ ù ���� �� ���� �������� �ֱ�
    }
}

void SearchSquare(int (*arr)[3])
{
    int search;
    printf("������ �Է��Ͻÿ�: ");
    scanf("%d", &search);

    for (int i = 0; i < 10; i++)
    {
        if (arr[i][2] == search)
            printf("%d�� ���������� %d\n", search, i + 1);
    }
}