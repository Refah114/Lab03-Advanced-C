#include <stdio.h>

void test1(int m, int n)
{
    m = 5;
    n = 24;
}

void test2(int *m, int *n)
{
    *m = 5;
    *n = 24;
}

void test3(int a, int *b)
{
    a = 38;
    *b = 57;
}

int main(void)
{
    int a = 10, b = 16;

    printf("a=%d, b=%d\n", a, b);

    test1(a, b);
    printf("After test1 -> a=%d, b=%d\n", a, b);

    test2(&a, &b);
    printf("After test2 -> a=%d, b=%d\n", a, b);

    test3(a, &b);
    printf("After test3 -> a=%d, b=%d\n", a, b);

    return 0;
}
