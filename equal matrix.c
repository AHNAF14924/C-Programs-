#include<stdio.h>
#define size 3
int main()
{
    int a[size][size],b[size][size],row,col,equal=1;
    printf("Enter elements of array a:\n");
    for(row=0;row<size;row++)
    {
        for(col=0;col<size;col++)
        {
            scanf("%d",&a[row][col]);
        }
    }
    printf("Enter elements of array b:\n");
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
            if(a[row][col]!=b[row][col])
                equal=0;
            break;
        }
    }
    if(equal==1)
    {
        printf("Matrix a and b are equal.\n");
    }
    else
        printf("Matrix a and b are not equal.\n");
    return 0;
}
