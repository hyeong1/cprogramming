// 파일 입출력 연습
// 사용자가 입력하는 학생들의 성적을 텍스트파일에 저장
// 학생들의 성적의 평균을 계산해서 화면에 출력
#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    char fname[100];
    int number, count = 0;
    char name[20];
    double score, total = 0.0;

    printf("성적 파일 이름을 입력하시오: ");
    scanf("%s", fname);

    // 성적 파일을 쓰기 모드로 열기
    if ((fp = fopen(fname, "w")) == NULL)
    {
        fprintf(stderr, "성적 파일 %s을/를 열 수 없습니다.\n", fname);
        exit(1);
    }

    // 사용자로부터 학번, 이름, 성적 입력받아서 파일에 저장
    while(1)
    {
        printf("학번, 이름, 성적을 입력하시오(음수이면 종료): ");
        scanf("%d", &number);
        if (number < 0) break;
        scanf("%s %lf", name, &score);
        fprintf(fp, "%d %s %lf\n", number, name, score);
    }
    fclose(fp);

    // 성적 파일 읽기 모드로 열기
    if ((fp = fopen(fname, "r")) == NULL)
    {
        fprintf(stderr, "성적 파일 %s을/를 열 수 없습니다.\n", fname);
        exit(1);
    }

    // 파일에서 성적을 읽어 평균 구하기
    while (!feof(fp))
    {
        fscanf(fp, "%d %s %lf", &number, name, &score);
        total += score;
        count++;
    }

    printf("평균 = %lf\n", total/count);
    fclose(fp);

    return 0;
}