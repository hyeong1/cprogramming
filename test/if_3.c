// ������������ ���� �ð�, ���� �ð��� �� ������ �־����� ��, ���� ���̰� ������ �ð� ���
// ���� �ð�, ���� �ð� �Է�, ���� �ð� ���
#include <stdio.h>

int main()
{
    int startHour, startMin, cookTime;
    printf("���� �ð�: ");
    scanf("%d %d", &startHour, &startMin);
    printf("���� �ð�: ");
    scanf("%d", &cookTime);

    startMin += cookTime; 

    if (startMin >= 60) // ���� ���� 60���� ���� ��
    {
        startHour += startMin / 60; // �ð��� �ð� + (���� �� / 60)
        startMin = startMin % 60;   // ���� ���� ���� �� ������ 60�� ������
        if (startHour >= 24) // �ð��� 24�ø� ������
            startHour = startHour % 24; // �ð��� �ð� ������ 24�� ������ -> ��) 25���� ��� 25 % 24 == 1��
        printf("%d %d", startHour, startMin);
    }
    else // ���� ���� 60���� ���� ������ �ٷ� ���
        printf("%d %d", startHour, startMin);

    return 0;
}