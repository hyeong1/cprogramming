// ����ü �������� 12
// ��Ŀ ���ӿ� ���Ǵ� ī�带 ����ü card�� ����
// 52���� ī�带 ����ü�� �迭�� ��Ÿ����.
// 52���� ī�带 ������ ������ �ʱ�ȭ�ϰ� ������ ����ϴ� ���α׷��� �ۼ��϶�
// card����ü ����: ī���� �� value-����, ī���� Ÿ�� suit-�ϳ��� ����
#include <stdio.h>

typedef struct card
{
    int value; // ī���� ��
    char suit; // ī�� Ÿ��
} CARD;

int main()
{
    CARD list[52];
    // ����ü �迭 list �ʱ�ȭ�ϱ�
    int val = 1; // �ʱ�ȭ�� value �� ����
    for (int i = 0; i < 13; i++)
    {
        list[i].value = val++;
        list[i].suit = 'c';
    }
    val = 1;
    for (int i = 13; i < 26; i++)
    {
        list[i].value = val++;
        list[i].suit = 'd';
    }
    val = 1;
    for (int i = 26; i < 39; i++)
    {
        list[i].value = val++;
        list[i].suit = 'h';
    }
    val = 1;
    for (int i = 39; i < 52; i++)
    {
        list[i].value = val++;
        list[i].suit = 's';
    }

    // ����ü �迭 �� ����ϱ�
    for (int i = 0; i < 52; i++)
        printf("%d:%c ", list[i].value, list[i].suit);
    return 0;
}