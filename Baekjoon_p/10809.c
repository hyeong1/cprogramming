// ���ĺ� ã��
#include <stdio.h>
#include <string.h>

int main()
{
    char word[100] = {0};
    scanf("%s", &word);

    for (int i = 97;i < 123;i++) // a���� z���� �� -a���� z�� ���ϴ� �� �켱
    {
        for (int j = 0;j < 100;j++) // �迭 ó������ ������
        {
            if (word[j] == i) // word ��Ҷ� ���ĺ��̶� �� -������
            {
                printf("%d ", j); // �ε�����ȣ ���
                break;
            }
            if (j == 99) // �迭 ������ �� �������� �ش� ���ĺ��� word�� ���� ���̹Ƿ� -1���
                printf("-1 ");
        }
    }
    
    return 0;
}
