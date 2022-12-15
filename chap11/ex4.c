// 학생들의 평점은 4.3점이 만점이라 하자
// 배열 grades[]에 학생 10명의 학점이 저장되어있다. 이것을 100점 만점으로 변환하여서 배열 scores[]에 저장하는 함수를 작성하고 테스트하라
#include <stdio.h>

void PrintArr(double *arr, int size);                   // 배열 요소 출력 함수
void Convert(double *grades, double *scores, int size); // 학점을 100점 만점으로 변환하는 함수

int main()
{
    double grades[10] = {0.0, 0.5, 1.0, 1.5, 2.0, 2.5, 3.0, 3.5, 4.0, 4.3}; // 학생들의 학점 배열
    double scores[10] = {0};                                                // 학점을 100점 만점으로 변환한 값을 저장하는 배열

    Convert(grades, scores, 10); // 학점 100점 만점으로 변환
    PrintArr(grades, 10);
    PrintArr(scores, 10);

    return 0;
}

void PrintArr(double *arr, int size)
{
    for (int i = 0; i < size; i++)
        printf("%05.2lf\t", *(arr + i)); // %05.2lf --> 입력 형식 맞추기
    printf("\n");
}

void Convert(double *grades, double *scores, int size)
{
    for (int i = 0; i < size; i++)
        *(scores + i) = *(grades + i) * (100 / 4.3);
}