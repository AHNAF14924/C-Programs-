#include<stdio.h>
#define size 3
int main()
{
    int a[size][size],row,col,upper=1;
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
            if(col<row&&a[row][col]!=0)
                upper=0;
            break;
        }
    }
    if(upper==1)
    {
        printf("\nThis matrix is upper triangle matrix.\n");
    }
    else
    {
        printf("\nThis matrix is not upper triangle matrix.\n");
    }
    return 0;
}
