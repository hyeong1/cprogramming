// ���̾� ����
// �� ���ĺ��� �ش��ϴ� ���� ����
// ���� 1�� 2��, �� �ڴ� ���� �� �ɸ� - �� ���ڴ� 1�ʾ� �ɸ�
// ���ĺ��� �Է��ϸ� ���̾��� �ɱ� ���� �ּ� �ð��� ���
// 1, 2-abc, 3-def, 4-ghi, 5-jkl, 6-mno, 7-pqrs, 8-tuv, 9-wxyz, 0
#include <stdio.h>
#include <string.h>

int main()
{
    char input[16] = {'\0'};      // �ܾ��� ���̴� 2���� ũ�ų� ����, 15���� �۰ų� ����
    int time = 2, len;            // �� �ð� �ջ��� ����
    scanf("%s", input);           // �ܾ� �Է�
    len = strlen(input);          // �Է��� �ܾ��� ����
    for (int i = 0; i < len; i++) // �ܾ� �˻�
    {
        switch (input[i])
        {
        // 2
        case 'A':
            time += 3;
            break;
        case 'B':
            time += 3;
            break;
        case 'C':
            time += 3;
            printf("%d\n", time);
            break;
        // 3
        case 'G':
            time += 4;
            break;
        case 'H':
            time += 4;
            break;
        case 'I':
            time += 4;
            printf("%d\n", time);
            break;
        // 4
        case 'J':
            time += 5;
            break;
        case 'K':
            time += 5;
            break;
        case 'L':
            time += 5;
            break;
        // 5
        case 'M':
            time += 6;
            break;
        case 'N':
            time += 6;
            printf("%d\n", time);
            break;
        case 'O':
            time += 6;
            break;
        // 6
        case 'P':
            time += 7;
            break;
        case 'Q':
            time += 7;
            break;
        case 'R':
            time += 7;
            break;
        case 'S':
            time += 7;
            break;
        // 7
        case 'T':
            time += 8;
            break;
        case 'U':
            time += 8;
            printf("%d\n", time);
            break;
        case 'V':
            time += 8;
            break;
        // 8
        case 'W':
            time += 9;
            break;
        case 'X':
            time += 9;
            break;
        case 'Y':
            time += 9;
            break;
        case 'Z':
            time += 9;
            break;
        }
    }
    printf("%d", time);

    return 0;
}