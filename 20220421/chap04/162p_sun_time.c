// 162�� �¾�� ���� �ð� ���
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

    // time�� ��dm�� ��Ÿ���� - time�� 60.0���� ������.
    time = time / 60.0;
    printf("���� �ð��� %f��\n", time);

    int min = time;
    double sec = (time - min) * 60;

    printf("���� �ð��� %d�� %lf�� \n", min, sec);

    return 0;
}