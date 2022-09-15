// ���� Nkg��� - 5kg, 3kg �������� �ִ��� ���� ���� ���
#include <stdio.h>

int findSugarBag(int sugarN);

int main()
{
    int sugarN, sugar5, sugar3, sugarBag; // �Է¹޴� ����, 5kg/3kg ���� ����, �� ���� ���� ����
    sugar5 = 5;
    sugar3 = 3;

    printf("����� ���� kg: ");
    scanf("%d", &sugarN);

    sugarBag = findSugarBag(sugarN);
    printf("%d\n", sugarBag);

    return 0;
}

int findSugarBag(int sugarN)
{
    int result = 0;

    if ((sugarN / 5) == 0 || (sugarN / 3) == 0) // ��Ȯ�ϰ� Nkg ���� �� ���� ��
        return -1;
    else
    {
        if ((sugarN % 5) % 3 == 0) // Nkg % 5�� 3�� ����� ��
        {
            result += (sugarN / 5);
            result += ((sugarN % 5) / 3);
        }
        else // Nkg % 5�� 3�� ����� �ƴϸ� 5�� ������ �ʰ� �ٷ� 3���� ����
            result += (sugarN / 3);
        return result;
    }
}