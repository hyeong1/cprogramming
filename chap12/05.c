// ���ڿ� �������� 5
// ���ڿ��� �޾Ƽ� ���� �빮�ڴ� �ҹ��ڷ�, �ҹ��ڴ� �빮�ڷ� ��ȯ�Ͽ� ���
// �Է¹��� ���ڰ� �ҹ��ڸ� �빮�ڷ�, �빮�ڸ� �ҹ��ڷ� ��ȯ
// ���ĺ��� ������ ����� ���ڴ� ��� �޽��� ���
// ����ڰ� '.' �Է��ϱ� ������ ���α׷� ��Ǯ��
#include <stdio.h>
#include <ctype.h>

int main()
{
    char input;
    while (1)
    {
        input = getchar();                     // ���� �Է¹޾Ƽ� input������ ����
        getchar();                             // �ٹٲ� ���� ���Ÿ� ���� getchar() �� �� �� ȣ��
        if (input == '.')
            return 0;
        else if (input >= 'A' && input <= 'Z')      // �Է¹��� ���ڰ� �빮�ڸ�
            printf("%c\n", tolower(input));    // �ҹ��ڷ� �ٲ㼭 ���
        else if (input >= 'a' && input <= 'z') // ���ڰ� �ҹ��ڸ�
            printf("%c\n", toupper(input));    // �빮�ڷ� �ٲ㼭 ���
        else
            printf("���ĺ� ��ҹ��ڸ� �Է��ϼ���\n");
    } 

    return 0;
}