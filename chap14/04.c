// ���������� �������� 4
// ���ڿ��� �迭�� �μ��� �޾Ƽ� ����� ���ڿ��� ���� ����ϴ� �Լ� �ۼ� �� �׽�Ʈ
#include <stdio.h>

void PrintStrArray(char **dp, int size); // ����Լ�

int main()
{
    //char* strArr[3] = {"hello world", "nice to meet", "have a good"};
    
    char *strArray[3] = {"Iphone", "Google", "Motolora"}; // ���ڿ��� ������ �迭
    int size = sizeof(strArray)/sizeof(strArray[0]); // strArray �迭�� �� ũ�⸦ ��Ÿ���� ����(��ü �迭 ũ��/�迭 �� �� �� ũ�� == �� ����)
    PrintStrArray(strArray, size); // �迭 �̸��� �迭�� ù ��° �ּ�
    
    return 0;
}

void PrintStrArray(char **dp, int size)
{
    for (int i = 0;i < size;i++)
        printf("%s\n", *(dp+i));
}