// 162?? ?��?? ???? ?��? ???
#include <stdio.h>

int main()
{
    double light_speed = 300000;
    double distance = 149600000;

    double time;
    time = distance / light_speed;
    
    printf("���� �ӵ��� %fkm/s \n", light_speed);
    printf("�¾�� �������� �Ÿ� %fkm \n", distance);
    printf("���� �ð��� %f�� \n", time);

    // time�� ������ ��Ÿ���� - time�� 60.0���� ������.
    /*
    // �� ������ time�� ������ �ٲ۴�.
    time = time / 60.0;
    printf("���� �ð��� %f��\n", time);
    // time�� int���� �����ؼ� �и� ������.
    int min = time;
    double sec = (time - min) * 60;
    */

    // ������ ������ �̿��ϴ� ���
    // �ʸ� 1������ ���� ��: ��, �ʸ� 1������ ���� ������: ��
    // int intTime = time;
    // printf("%d", intTime);

    //int min = time / 60;
    //double sec = (int)time % 60;

    //printf("���� �ð��� %d�� %lf�� \n", min, sec);


    // �ʸ� ������ �ٲ۴����� (�� / 60) ������������ �����ؼ� �и� �����ϱ�
    time = time / 60;

    int minute = time;
    // ��.XX���� �� ���� 0.xx�� 60�� ���ϸ� ��
    double second = (time - minute) * 60;

    printf("���� �ð��� %d�� %lf�� \n", minute, second);

    return 0;
}