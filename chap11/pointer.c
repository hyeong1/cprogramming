#include <stdio.h>

int main()
{ // *: ��, &: �ּ�
    // int *p = NULL; // �����ͺ����� null�� �ʱ�ȭ
    int i = 10;
    int *pi = &i; // i�� �ּҸ� �����ͺ��� pi�� ���� - �����ͺ����� �׻� 4����Ʈ
    // pi i�� �ּ�, *pi pi�� ����Ű�� i�� �� ����(i�� ����), &pi pi�� �ּ�

    printf("%d\n", i);
    printf("%d\n", *pi);
    printf("%d\n", &i); // i�� �ּ�
    printf("%d\n", pi); // pi�� ����� �� (i�� �ּ�)

    return 0;
}