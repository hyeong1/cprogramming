// 알파벳 찾기
#include <stdio.h>
#include <string.h>

int main()
{
    char word[100] = {0};
    scanf("%s", &word);

    for (int i = 97;i < 123;i++) // a부터 z까지 비교 -a부터 z를 비교하는 게 우선
    {
        for (int j = 0;j < 100;j++) // 배열 처음부터 끝까지
        {
            if (word[j] == i) // word 요소랑 알파벳이랑 비교 -같으면
            {
                printf("%d ", j); // 인덱스번호 출력
                break;
            }
            if (j == 99) // 배열 끝까지 다 돌았으면 해당 알파벳이 word에 없는 것이므로 -1출력
                printf("-1 ");
        }
    }
    
    return 0;
}
