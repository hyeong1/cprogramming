// 1~20 ������ ������ �ʱ�ȭ�� �迭 ���� �����Ϳ��� ����ڰ� ������ ������ �˻�
// �迭 �� ����� ��ġ�� ���
// 5ȸ �ݺ� �˻�

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// �迭 ��� ����ϴ� �Լ�
void printArray(int *array, int count);
// �迭 ��� �˻��ϴ� �Լ�
void searchData(int *array, int count, int num);

int main() {
    int num[10]; //0~9ũ���� �迭
    int count = 10; // �迭 ũ�⸦ �����ϴ� ����
    srand(time(NULL));

    // num�迭 �ȿ� ���� �ֱ�
    for (int i = 0;i < 10;i++)
        num[i] = rand() % 20 + 1;

    printArray(num, count);

    // �迭 ���� �˻� 
    searchData(num, count, 5);
    
    return 0;
}

// �迭 ��� ����ϴ� �Լ�
void printArray(int *array, int count) {
    printf("�迭 ����: ");

    for (int i = 0;i < 10;i++)
        printf("%d\t", array[i]);
    printf("\n");
}
// �迭 ��� �˻��ϴ� �Լ�
void searchData(int *array, int count, int num) {
    int search;
    for (int i = 0;i < num;i++) {
        printf("�˻��� ������ �Է��Ͻÿ�: ");
        scanf("%d", &search);

        for (int i = 0;i < count;i++) {
            if (search == array[i]) {
                printf("%d��(��) %d�� �濡 �ֽ��ϴ�.\n", search, i);
                break;
            }
            else if (i == 9)
                printf("%d��(��) �������� �ʽ��ϴ�.\n", search);
        }
    }
}