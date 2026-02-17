#include <stdio.h>

#define MAX_SIZE 5

int main()
{
    int first[MAX_SIZE];
    int second[MAX_SIZE];
    int diff[MAX_SIZE];
    int i;

    printf("Enter %d data items for first array: ", MAX_SIZE);
    for(i = 0; i < MAX_SIZE; i++)
    {
        scanf("%d", &first[i]);
    }

    printf("Enter %d data items for second array: ", MAX_SIZE);
    for(i = 0; i < MAX_SIZE; i++)
    {
        scanf("%d", &second[i]);
    }

    for(i = 0; i < MAX_SIZE; i++)
    {
        diff[i] = second[i] - first[i];
    }

    printf("\nOutput:\n");
    for(i = 0; i < MAX_SIZE; i++)
    {
        printf("%5d %5d %5d\n",
               first[i],
               second[i],
               diff[i]);
    }

    return 0;
}
