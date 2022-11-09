#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// �Ķ���ͷ� �־����� ���ڿ��� const�� �־����ϴ�. �����Ϸ��� ���ڿ��� �����ؼ� ����ϼ���.
char *solution(const char *phone_number)
{
    // return ���� malloc �� ���� �Ҵ��� ������ּ���. �Ҵ� ���̴� ��Ȳ�� �°� �������ּ���.
    char *answer;
    int len = strlen(phone_number);
    answer = (char *)malloc(sizeof(char) * (len + 1));

    for (int i = 0; i <= len; i++) // �Է��� ��ȭ��ȣ answer�� ����
        answer[i] = phone_number[i];

    for (int i = len - 5; i >= 0; i--)
        answer[i] = '*'; // �� 4�ڸ� �����ϰ� "*"���� �ٲٱ�
    return answer;
}