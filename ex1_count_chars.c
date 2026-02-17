#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
    if(argc==1)
    {
        printf("No word to examine.\n");
        exit(0);
    }

    int n=0;

    while(argv[1][n] != '\0')
    {
        n = n + 1;
    }

    printf("The word %s has %d characters.\n", argv[1], n);

    return 0;
}
