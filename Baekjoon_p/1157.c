// ���� ���� ���� ���ĺ� �빮�ڷ� ��� (���Ҷ��� ��ҹ��� ����x)
#include <stdio.h>
#include <string.h>

int main()
{
    char word[1000000] = {'\0'};                                             // �� ������ �ʱ�ȭ
    int alphabet[26] = {0}, size, big, small, index, max, maxIndex, overlap; // ���ĺ� �󵵼� üũ�� �迭 - 0���� �ʱ�ȭ
    scanf("%s", &word);

    size = strlen(word); // �Է¹��� ���ڿ��� ����
    // �ܾ� �迭 ���鼭 �� ���ĺ� �󵵼� üũ - A���� �˻� (�ƽ�Ű�ڵ� 65��)-alphbet�迭 0������ ++;
    // ���� �� A=65, a=97�� �����ؼ� �ƴϸ� �Ѵ� ++, ������ �ش� alphbet �迭 �ε��� ��++�ϰ� break;
    for (int i = 0; i < size; i++) // �Է¹��� ���ڿ��� ���̸�ŭ �� �ݺ�
    {
        index = 0;              // alphbet �ε���
        big = 65;               // �빮�� �ƽ�Ű�ڵ� ����
        small = 97;             // �ҹ��� �ƽ�Ű�ڵ� ����
        while (word[i] != '\0') // ���ڰ� �ΰ��� �ƴҵ��� �ݺ�
        {
            if ((int)word[i] == big || (int)word[i] == small) // �빮�� �Ǵ� �ҹ��� �ƽ�Ű�ڵ�� ������(��ҹ��� ����x)
            {
                alphabet[index]++; // alphbet�� �ش� �ε��� ������Ű��
                break;             // while�� ������
            }
            else
            {
                big++;
                small++;
                index++;
            }
        }
    }
    // alphbet �迭 ���
    // for (int i = 0; i < 26; i++)
    //    printf("%d ", alphabet[i]);

    // �󵵼� ���� ���� ���ĺ��� 1���� �� - �빮�ڷ� ���
    // �迭���� �ִ� ã�� �ڵ� �̿�
    max = alphabet[0]; // �ִ��� alphabet[0]�̶� ����
    maxIndex = 0;      // �ִ� �ε���
    overlap = -1;      // �ߺ��� �ε���
    for (int i = 1; i < 26; i++)
    {
        if (max < alphabet[i]) // ���� ���� ���� ���ĺ� ã�� - �迭���� �ִ� ã�� �ڵ�
        {
            max = alphabet[i];
            maxIndex = i;
        }
        // �ߺ��ε��� �߰��ؼ�
        else if (max == alphabet[i]) // �ִ��̶� ���� ������
            overlap = i;             // �ߺ��ε����� i�� ����
    }
    // ��� ���
    if (overlap < 0) // �ߺ��� �ε����� ������ �ߺ� �� �����Ƿ�
        printf("%c", maxIndex + 65);
    else if (alphabet[maxIndex] > alphabet[overlap]) // �ߺ��� �ε����� ������ �ƴϸ� �ߺ��� ���� -> max���̶� ��
        printf("%c", maxIndex + 65);                 // �ִ� �ε����� 65���ؼ� �빮�ڷ� ���
    // max���̶� ���� ���� �ϳ��̻� �����ϸ� '?' ���
    else             // �ߺ��ε��� ������ �ִ��ε��� ���� �۰ų� ������
        printf("?"); // ? ���

    return 0;
}