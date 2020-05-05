#include<stdio.h>
#define size 3
int main()
{
    int a[size][size],b[size][size],c[size][size],row,col;
    printf("Enter elements of a matrix:\n");
    for(row=0;row<size;row++)
    {
        for(col=0;col<size;col++)
        {
            scanf("%d",&a[row][col]);
        }
    }
    printf("Enter elements of b matrix:\n");
    for(row=0;row<size;row++)
    {
        for(col=0;col<size;col++)
        {
            scanf("%d",&b[row][col]);
        }
    }
    for(row=0;row<size;row++)
    {
        for(col=0;col<size;col++)
        {
            c[row][col]=a[row][col]-b[row][col];
        }
    }
    printf("matrix after subtraction:\n");
    for(row=0;row<size;row++)
    {
        for(col=0;col<size;col++)
        {
            printf("%d ",c[row][col]);
        }
        printf("\n");
    }
    return 0;
}
