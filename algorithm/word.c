#include <stdio.h>
#include <string.h>

int main() {
	int wordN, find, box, least; // �ܾ��� ����, ã������ �ܾ��� ��ġ
	char word[1000][100];
    scanf("%d %d", &wordN, &find);
	// �ܾ� �Է� �ޱ�
    for (int i = 0;i < wordN;i++)
		scanf("%s\n", word[i]);
	// �Է¹��� �ܾ� ���� -���̰� ª������, ���� ���ϼ��� ������
    
	return 0;
}
