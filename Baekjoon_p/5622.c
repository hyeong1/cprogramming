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
    int time = 0, len;            // �� �ð� �ջ��� ����
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
            break;
        // 3
        case 'D':
            time += 4;
            break;
        case 'E':
            time += 4;
            break;
        case 'F':
            time += 4;
            break;
        // 4
        case 'G':
            time += 5;
            break;
        case 'H':
            time += 5;
            break;
        case 'I':
            time += 5;
            break;
        // 5
        case 'J':
            time += 6;
            break;
        case 'K':
            time += 6;
            break;
        case 'L':
            time += 6;
            break;
        // 6
        case 'M':
            time += 7;
            break;
        case 'N':
            time += 7;
            break;
        case 'O':
            time += 7;
            break;
        // 7
        case 'P':
            time += 8;
            break;
        case 'Q':
            time += 8;
            break;
        case 'R':
            time += 8;
            break;
        case 'S':
            time += 8;
            break;
        // 8
        case 'T':
            time += 9;
            break;
        case 'U':
            time += 9;
            break;
        case 'V':
            time += 9;
            break;
        // 9
        case 'W':
            time += 10;
            break;
        case 'X':
            time += 10;
            break;
        case 'Y':
            time += 10;
            break;
        case 'Z':
            time += 10;
            break;
        }
    }
    printf("%d", time);

    return 0;
}