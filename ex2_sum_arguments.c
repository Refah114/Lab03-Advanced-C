#include<stdio.h>
#include<stdlib.h>

int myatoi(char *str) {
    int i, res = 0;
    for (i = 0; str[i] != '\0'; ++i) {
        res = res * 10 + str[i] - '0';
    }
    return res;
}

int main(int argc, char *argv[])
{
    int sum;

    if(argc!=4)
    {
        printf("You must input three numbers.\n");
        exit(0);
    }

    sum = myatoi(argv[1]) + myatoi(argv[2]) + myatoi(argv[3]);

    printf("The sum of three values is = %d\n", sum);

    return 0;
}
