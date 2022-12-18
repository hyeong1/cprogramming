#include <stdio.h>

void increment(int *p, int n);

int main()
{
    int year[] = {2006, 2008, 2010, 2012, 2014};

    printf("%d\n", year[3]);
    increment(&year[0], 10);
    printf("%d\n", year[2]);

    return 0;
}

void increment(int *p, int n)
{
    int i;
    for (i = 0;i < 5;i++)
        *p++ += i*n;
}