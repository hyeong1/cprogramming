#include <stdio.h>

int main()
{
    // ���� ���̴� 170cm
    // 3���� �ͳ�
    // �ͳ��� ���̰� ���� ���̺��� ���ų� ���ٸ� ���� �ͳΰ� �浹
    // 3���� �ͳ� ���� �Է¹޾Ƽ� �� ����ϸ� PASS
    // �浹�Ѵٸ� CRASH ���

    int car, t1, t2, t3;
    printf("ù��° �ͳ� ����:");
    scanf("%d", &t1);

    printf("�ι�° �ͳ� ����:");
    scanf("%d", &t2);

    printf("����° �ͳ� ����:");
    scanf("%d", &t3);

    car = 170;

    // ù��° �ͳ�
    // ���� ���̰� �ͳκ��� ũ�ų� ������ �浹
    if (car >= t1){  // == car < t1
        printf("CRASH\n");
    }
    // ���� ���̰� �ͳκ��� ������ ������ ���
    else{
        printf("PASS\n");
    }

    // �ι�° �ͳ�
    if (car >= t2){
        printf("CRASH\n");
    }
    else{
        printf("PASS\n");
    }

    // ����° �ͳ�
    if (car >= t3){
        printf("CRASH\n");
    }
    else{
        printf("PASS\n");
    }



    return 0;
}