#include <stdio.h>

#define MAX_ROW 10
#define MAX_COL 10

int main()
{
    int a[MAX_ROW][MAX_COL];
    int b[MAX_ROW][MAX_COL];
    int s[MAX_ROW][MAX_COL];
    int rowsa, colsa, rowsb, colsb;
    int j, k;

    printf("Enter number of rows for Matrix 1: ");
    scanf("%d", &rowsa);

    printf("Enter number of columns for Matrix 1: ");
    scanf("%d", &colsa);

    printf("Enter elements of Matrix 1:\n");
    for(j = 0; j < rowsa; j++)
    {
        for(k = 0; k < colsa; k++)
        {
            scanf("%d", &a[j][k]);
        }
    }

    printf("Enter number of rows for Matrix 2: ");
    scanf("%d", &rowsb);

    printf("Enter number of columns for Matrix 2: ");
    scanf("%d", &colsb);

    printf("Enter elements of Matrix 2:\n");
    for(j = 0; j < rowsb; j++)
    {
        for(k = 0; k < colsb; k++)
        {
            scanf("%d", &b[j][k]);
        }
    }

    if(rowsa != rowsb || colsa != colsb)
    {
        printf("Matrix addition not possible.\n");
        return 0;
    }

    for(j = 0; j < rowsa; j++)
    {
        for(k = 0; k < colsa; k++)
        {
            s[j][k] = a[j][k] + b[j][k];
        }
    }

    printf("\nSum of matrices:\n");
    for(j = 0; j < rowsa; j++)
    {
        for(k = 0; k < colsa; k++)
        {
            printf("%5d ", s[j][k]);
        }
        printf("\n");
    }

    return 0;
}
