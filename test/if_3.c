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
        startHour += startMin / 60;
        startMin = startMin % 60;
        if (startHour >= 24)
            startHour = startHour % 24;
        printf("%d %d", startHour, startMin);
    }
    else // ���� ���� 60���� ���� ������ �ٷ� ���
        printf("%d %d", startHour, startMin);

    return 0;
}