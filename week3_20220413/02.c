#include <stdio.h>

int main()
{
    // �� �� �Է¹ް� ũ���
    // ū �� - ���� �� ���
    // ������ ���ٰ� ���

    int num1, num2;
    printf("���� �� ���� �Է��ϼ���: ");
    scanf("%d %d", &num1, &num2);

    if (num1 == num2){
        printf("�� ���� �����ϴ�.");
    }
    else if (num1 > num2){
        printf("%d", num1 - num2);
    }
    else{
        printf("%d", num2 - num1);
    }
    

    return 0;
}