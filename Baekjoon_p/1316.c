/*
�׷� �ܾ� üĿ
�׷� �ܾ�� �ܾ �����ϴ� ��� ���ڿ� ���ؼ�, �� ���ڰ� �����ؼ� ��Ÿ���� ��츸�� ���Ѵ�.
���� ���, ccazzzzbb�� c, a, z, b�� ��� �����ؼ� ��Ÿ����, kin�� k, i, n�� �����ؼ� ��Ÿ���� ������ �׷� �ܾ�������, aabbbccb�� b�� �������� ��Ÿ���� ������ �׷� �ܾ �ƴϴ�.
�ܾ� N���� �Է����� �޾� �׷� �ܾ��� ������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
*/
#include <stdio.h>
#include <string.h>

int GroupWordCheck(const char *word);

int main()
{
    char word[100];
    int wordN;     // �Է��� �ܾ� ����
    int count = 0; // �׷� �ܾ� üũ�� ����
    scanf("%d", &wordN);

    for (int i = 0; i < wordN; i++)
    {
        scanf("%s", word);
        count += GroupWordCheck(word);
        memset(word, 0, 100 * sizeof(word[0]));
    }

    printf("%d", count);

    return 0;
}

int GroupWordCheck(const char *word)
{
    char alphabet[26] = {0};

    for (int i = 0; i < strlen(word); i++)
        alphabet[(int)word[i] - 97]++;

    // �׷� �ܾ� üũ
    for (int i = 0; i < 26; i++)
    {
        if (alphabet[i] > 1) // ���ĺ� �󵵼��� 1���� Ŭ ���
        {
            for (int j = 0; j < strlen(word); j++) // word ���ڿ�����
            {
                if (word[i] == word[j]) // �󵵼��� 2 �̻��� ���ڸ� ã�Ƽ�
                {
                    if (word[j] != word[j + 1]) // ���� ���ڿ� ��
                        return 0;
                    else
                        return 1;
                }
            }
        }
    }
    return 1;
}