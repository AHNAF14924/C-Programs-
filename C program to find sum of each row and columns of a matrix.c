#include<stdio.h>
#define size 3
int main()
{
    int ahnaf[size][size],row,col,sum=0;
    printf("Enter elements of ahnaf array:\n");
    for(row=0;row<size;row++)
    {
        for(col=0;col<size;col++)
        {
            scanf("%d",&ahnaf[row][col]);
        }
    }
    for(row=0;row<size;row++)
    {
        for(col=0;col<size;col++)
        {
            sum+=ahnaf[row][col];
        }
        printf("Sum of row %d = %d.\n",row+1,sum);
    }
    for(row=0;row<size;row++)
    {
        sum=0;
        for(col=0;col<size;col++)
        {
            sum+=ahnaf[col][row];
        }
        printf("Sum of col  %d = %d.\n",row+1,sum);
    }
    return 0;
}
