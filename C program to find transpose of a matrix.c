#include<stdio.h>
#define size 3
int main()
{
    int a[size][size],b[size][size],row,col;
    printf("Enter elements of a array:\n");
    for(row=0;row<size;row++)
    {
        for(col=0;col<size;col++)
        {
            scanf("%d",&a[row][col]);
        }
    }
    for(row=0;row<size;row++)
    {
        for(col=0;col<size;col++)
        {
            b[col][row]=a[row][col];
        }
    }

}
