// 구조체 연습문제 1
// 책을 나타내는 구조체 book을 선언해서 사용해보자
// 책은 제목, 저자, 분야를 가지고 있다고 가정
#include <stdio.h>

typedef struct book
{
    int id;
    char title[100];
    char author[20];
}BOOK;

int main()
{
    BOOK book1 = {1, "바람과 함꼐 사라지다", "마가렛 미첼"};
    printf("{ %d, %s, %s }\n", book1.id, book1.title, book1.author);
    return 0;
}