#include <stdio.h>
#include <stdlib.h> // ���� �߻� �������
#include <time.h>   // �õ� -> ������ ��� �ٲ��

// 1���� 100������ �� -���߱� ����
// rand() % 100 --> 0���� 99����
// ���߱� ��ȸ 5��
void findNumber() {
    srand(time(NULL)); // time�� ��� �ٲ���� ������ ������ �ٸ� ������ �߻���Ŵ

    int answer;
    answer = rand() % 100 + 1;

    for (int i = 4;i >= 0;i--) {
        int inputNum;
        printf("1���� 100������ �� �� �ϳ��� �Է��ϼ���: ");
        scanf("%d", &inputNum);

        if (inputNum < answer) {
            printf("�Է��� ������ �� Ů�ϴ�.(���� ��ȸ: %d)\n", i);
        }
        else if (inputNum > answer) {
            printf("�Է��� ������ �� �۽��ϴ�. (���� ��ȸ: %d)\n", i);
        }
        else if (inputNum == answer) {
            printf("%d ����!\n", answer);
            break;
        }
    }
}

int main() {
    findNumber();

    return 0;
}