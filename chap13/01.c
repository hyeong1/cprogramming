// ����ü �������� 1
// å�� ��Ÿ���� ����ü book�� �����ؼ� ����غ���
// å�� ����, ����, �о߸� ������ �ִٰ� ����
#include <stdio.h>

typedef struct book
{
    int id;
    char title[100];
    char author[20];
}BOOK;

int main()
{
    BOOK book1 = {1, "�ٶ��� �Բ� �������", "������ ��ÿ"};
    printf("{ %d, %s, %s }\n", book1.id, book1.title, book1.author);
    return 0;
}