#include <stdio.h>
#include <string.h>

int main() {
	int wordN, find, box, least; // 단어의 개수, 찾으려는 단어의 위치
	char word[1000][100];
    scanf("%d %d", &wordN, &find);
	// 단어 입력 받기
    for (int i = 0;i < wordN;i++)
		scanf("%s\n", word[i]);
	// 입력받은 단어 정렬 -길이가 짧을수록, 사전 순일수록 앞으로
    
	return 0;
}
