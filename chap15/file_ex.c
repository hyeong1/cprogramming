// 파일 입출력
#include <stdio.h>

int main()
{
    // 파일 쓰기 예제
    // int i = 23;
    // float f = 1.2345;

    // 파일 읽기 예제
    int i;
    float f; // 파일에 있는 값을 읽어올 때는 변수에 값 초기화 없이 선언만
    FILE *fp;

    fp = fopen("sample.txt", "r"); // 파일에 쓸 때는 "w"(쓰기는 파일을 새로 생성하는 것), 파일에 있는 값을 읽을 때는 "r"

    if (fp != NULL)                  // 파일이 존재하면
        fscanf(fp, "%d %f", &i, &f); // 파일에 있는 값 읽어서 각각 i, f에 대입
    //  fprintf(fp, "%10d %16.3f", i, f); // 변수에 있는 값을 sample.txt파일에 쓰기모드로 씀

    printf("%d %f", i, f); // 파일에 있는 값이 변수에 들어갔는지 화면에 확인
    fclose(fp);

    return 0;
}