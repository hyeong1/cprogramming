// �̻��� ���� ����� - ���α׷��ӽ� �������� Lv1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// �Ķ���ͷ� �־����� ���ڿ��� const�� �־����ϴ�. �����Ϸ��� ���ڿ��� �����ؼ� ����ϼ���.
char *solution(const char *s)
{
    // return ���� malloc �� ���� �Ҵ��� ������ּ���. �Ҵ� ���̴� ��Ȳ�� �°� �������ּ���.
    char *answer = (char *)malloc(strlen(s) + 1);
    int check = 0;
    strcpy(answer, s);

    for (int i = 0; i <= strlen(s); i++)
    {
        if (!(check % 2)) // ������ �������� ¦����° ���ڴ� �빮�ڷ�
        {
            answer[i] = toupper(answer[i]);
            check++;
        }
        else // Ȧ����° ���ڴ� �ҹ��ڷ� ��ȯ
        {
            answer[i] = tolower(answer[i]);
            check++;
        }
        if (isspace(answer[i])) // i��° ���ڰ� �����̸� -isspace()�Լ� ����ؼ� ���� üũ�ϱ�
        {
            check = 0;
            continue;
        }
    }
    return answer;
}

int main()
{
    char s[] = "hhhh hhhh";
    printf("%s\n", solution(s));
    return 0;
}