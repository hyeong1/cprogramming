// �α��� �� ���̵� �˻��ϴ� �Լ� int check()
// check()�� �� �� ȣ�� �� ������ ��й�ȣ�� ����� ��ġ ���θ� 0, 1�� ��ȯ
// ��й�ȣ�� 1234�� �����Ǿ� �ִٰ� ����
// check()�� 3�� �̻� ȣ��ǰ� ��й�ȣ�� ��ġ���� ������ check()���� "�α��� �õ� Ƚ�� �ʰ�"�޼��� ���
#include <stdio.h>
#include <stdlib.h>

int check();

int main()
{      
    while(1)
    {  
        if (check() == 1)
        {
            printf("�α��� ����\n");
            break;
        }
        else
            check();
    }
    
    return 0;
}

int check()
{
    static int tryCount = 0;
    int pw, inputPw;
    pw = 1234;
    
    printf("��й�ȣ: ");
    scanf("%d", &inputPw);

    tryCount++;
    if (tryCount >= 3)
    {
        printf("�α��� �õ�Ƚ�� �ʰ�\n");
        exit(1);
    } 

    if (pw == inputPw)
        return 1;
    else
        return 0;

}