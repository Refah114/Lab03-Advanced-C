#include<stdio.h>

int main()
{
    int n = 84;
    int *p;

    p = &n;

    printf("n = %d\n", n);
    printf("&n = %p\n", &n);
    printf("p = %p\n", p);
    printf("*p = %d\n", *p);

    return 0;
}
