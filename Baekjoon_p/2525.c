// ����ð� ����
#include <stdio.h>

int main()
{
    int H, M, needM;
    scanf("%d %d\n%d", &H, &M, &needM);
    M += needM; 
    H += M / 60; // �ð��� ���� 60���� ���� ���� ����
    M = M % 60;  // ���� 60�� �������� ����
    if (H >= 24) // �ð��� 24�ø� �������
        H -= 24; // �ش� �ð����� 24�� ���� ���
    
    printf("%d %d", H, M);
    return 0;
}