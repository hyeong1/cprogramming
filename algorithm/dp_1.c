// ���̳��� ���α׷��� �˰��� ����
// ���� ���
// 3kg, 5kg ������ ��� -> ���� ���� �ּҰ� �ǵ��� ���
// 18kg�� 5kg 3��, 3kg 1�� ��� -> �� 4��
#include <stdio.h>

int main()
{
    int delivery;
    int kg5 = 5, kg3 = 3;
    int result = 0;
    scanf("%d", &delivery);

    if (!((delivery % kg5) % kg3))                            // 5�� ���� �������� 3���� �������� ��:18 (3kg*6 �Ǵ� 5kg*3 + 3kg*1)
        result = (delivery / kg5) + ((delivery % kg5) / kg3); // 5�� ���� �� + 5�� ���� �������� 3���� ���� ���� ��ü ���� ����
    else                                                      // ��: 21
        result = delivery / kg3;

    printf("%d\n", result);
    return 0;
}