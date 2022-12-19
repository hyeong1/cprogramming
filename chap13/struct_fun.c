// 구조체 함수, 포인터 사용
#include <stdio.h>

struct point
{
    int x, y;
};

int equal(struct point *pp1, struct point *pp2);

int main()
{
    struct point p1 = {1, 2};
    struct point p2 = {0, 2};

    printf("일치 여부 = %d\n", equal(&p1, &p2));

    return 0;
}

int equal(struct point *pp1, struct point *pp2)
{
    /*if(pp1->x == pp2->x && pp1->y == pp2->y)
        return 1;
    return 0;*/
    return (pp1->x == pp2->x && pp1->y == pp2->y);
}